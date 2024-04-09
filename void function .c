#include<stdio.h>
#include<math.h>
 float cube(int number);

    int main(){
   // function call
    
    printf("%f",cube(2));
      return 0;
 }
     

     // function declaration 
    float cube(int number){
    float cube = number* number*number;
    return cube ;

 }