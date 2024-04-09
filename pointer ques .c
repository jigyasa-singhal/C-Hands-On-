/*A function for the sum , product , average for the 2 numbers 
and print all of them in main function*/
#include<stdio.h>

int dowork(int a, int b, int *sum, int *avg, int *prod);
//we can't take the a & b as pointer because we have to pass the a and b we need it as a and b.

int main(){
    int a ;
    int b ;
    int sum;
    int avg;
    int prod;

     printf("Enter the number a");
     scanf("%d",&a);
     printf("Enter the number b");
     scanf("%d",&b);
     dowork( a, b , &sum , &avg, &prod);
    printf(" sum =%d, avg=%d,prod=%d",sum ,avg, prod);
    return 0 ;
}
int dowork(int a, int b, int *sum, int *avg, int *prod){
     *sum= a+b; 
     *avg= ((a+b)/2);
     *prod= a*b;
}


