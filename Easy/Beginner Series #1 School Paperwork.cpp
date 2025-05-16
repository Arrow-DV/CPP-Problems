int paperwork(int n, int m){
  int result = n * m ;  
  return n < 0  || m < 0 ? 0 : result ;
}