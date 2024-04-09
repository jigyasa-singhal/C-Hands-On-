#include<stdio.h>

int sum(int a , int b);
 


int main(){
   
    int s = sum(4,4);
    printf("average of two number is: %d", s ) ;
    return 0 ;
}
   int  sum(int a , int b){
     return(a+b) ;
 }
