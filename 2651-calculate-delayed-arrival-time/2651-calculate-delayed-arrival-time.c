int findDelayedArrivalTime(int arrivalTime, int delayedTime) {

    if( arrivalTime>=1 || arrivalTime < 24 &&  delayedTime >=1||delayedTime <= 24){
    int ans=(arrivalTime+delayedTime)%24;
       return  ans;
    }
     return 0;
}