int past(int h, int m, int s) {
    int oneSecond = 1000;
    int oneMinute = 60 * oneSecond;
    int oneHour = 60 * oneMinute;
    return (h * oneHour) + (m * oneMinute) + (s * oneSecond);
   
}