class Finance
{
    public:
    static unsigned long long finance(unsigned long long n){
        int w = n + 1;
        int d = n + 2;
        return w * d * n / 2;
    }
};