#include <array>
#include <string>

int points(const std::array<std::string, 10>& games) {
  int score = 0 ;   
  int x , y; 
  for ( int i = 0  ; i < games.size() ; i ++ ){
      x = int(games[i][0]);
      y = int(games[i][2]);
      if ( x > y ){
        score += 3;
      }
      else if ( y > x ){
        score += 0;
      }
      else{
        score += 1;
      }
    
    }
  return score;
}