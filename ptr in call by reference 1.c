#include<stdio.h>

void sqaure(int *n);
int main(){
    
    // call by reference or through the address
    int number = 5;
    square(&number);//argument
    printf("number is = %d\n",number);
    //value change in the address so also change in the main function.
}


void square(int *n){//parameter
    *n = *n * *n;// *n = 4*4
    // value change in address (value address mein hi change hui hai instead of the copy)
    printf("square is : %d\n" , *n);
}
/*value of the number and the aquare same because the value of quare save in the number itself 
so when we print the number after print the square so it can't print the 5 because 5 is replace by the 16.*/

// copy mien change hota hai call by value mein