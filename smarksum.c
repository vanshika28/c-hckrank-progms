

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
    int sum=0 ;
    char c;
  if(gender== 'b'){
      for (int student = 0; student < number_of_students; student+=2){
      
       sum = sum + *(marks + student);
       
    }

  }
  else if(gender=='g'){
      for (int student = 1; student < number_of_students; student+=2){
      
       sum = sum + *(marks + student);
       
        
  }

}
          return sum;

}
