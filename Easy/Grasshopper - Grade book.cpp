char getGrade(int a, int b, int c) {
  int average = (a + b + c) / 3;
    if ( 90 <= average ){
        return 'A';
    }  
    else if ( 80 <= average ){
        return 'B';
    }
    else if (70 <=  average ){
      return 'C';
    }
    else if (60 <= average ){
      return 'D';
    }
    else{
      return 'F';
    }
}