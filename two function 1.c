#include<stdio.h>
    // function declaration
    void printhello();
    void printnamaste();

    int main(){    
      char ch;  
        // i = indian , b= british
     printf("enter the i or b");
     scanf("%c",&ch);


   if (ch=='b'){
     printhello();
   }
  else {
   printnamaste();

   return 0;
  }
    }

     
// function declration
    void printhello(){
        printf("Hello");
    }
      
    void printnamaste(){
     printf("Namaste");
    }
      
    
    