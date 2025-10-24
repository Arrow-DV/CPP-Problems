#include <string>
#include <sstream>

enum Counting_Status
{
    IDLE,              
    COUNTING_INCREASE,   
    COUNTING_DECREASE,   
    PAUSED               
};

std::string door(const std::string &events)
{
    std::ostringstream result;  
    Counting_Status status = IDLE; 
    int position = 0;             
    int direction = 1;            

    for (int t = 0; t < (int)events.length(); t++) 
    {
        char event = events[t];

        if (event == 'P')
        {
            if (status == COUNTING_INCREASE || status == COUNTING_DECREASE)
                status = PAUSED;
            else if (status == PAUSED)
                status = (direction == 1 ? COUNTING_INCREASE : COUNTING_DECREASE);
            else if (status == IDLE && position == 0)
            {
                status = COUNTING_INCREASE;
                direction = 1;
            }
            else if (status == IDLE && position == 5)
            {
                status = COUNTING_DECREASE;
                direction = -1;
            }
        }
        else if (event == 'O')
        {
            if (status == COUNTING_INCREASE)
            {
                status = COUNTING_DECREASE;
                direction = -1;
            }
            else if (status == COUNTING_DECREASE)
            {
                status = COUNTING_INCREASE;
                direction = 1;
            }
        }


        if (status == COUNTING_INCREASE)
        {
            position += 1;
            if (position >= 5)
            {
                position = 5;
                status = IDLE; 
            }
        }
        else if (status == COUNTING_DECREASE)
        {
            position -= 1;
            if (position <= 0)
            {
                position = 0;
                status = IDLE; 
            }
        }


        result << position;
    }

    return result.str();
}
