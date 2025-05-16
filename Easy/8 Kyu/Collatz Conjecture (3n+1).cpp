unsigned int hotpo(unsigned int n){
    
    int counter = 0 ;
    while ( n !=  1 ){
        if ( n % 2 == 0){
            n = n / 2;  
        }
        else if(n % 2 == 1 ){
            n = ( 3 * n  ) + 1; 
        }
      counter ++;
    }
  
    return counter;
}