// Swap(interchange) the two numbers a &b by a third variable 
#include<stdio.h>


void swap(int *a , int *b);

//call by reference 
int main(){
   int x = 3 , y = 5 ; //value of x save in a and y in b
   swap(&x , &y);
   printf("x = %d & y = %d", x,y);
   return 0;
}

//change by the help of the address
//temp is a  temporary new varibale
void swap(int *a ,int *b){
     int temp =  *a; //temp=3
         *a=  *b;    //a=5
        *b =  temp;   //b=3
}

