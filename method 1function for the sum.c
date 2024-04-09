/*write a function to calculate the sum of 2 numbers 
Print  in main function*/
#include<stdio.h>

int sum (int a , int b);

int main(){
    int a;
    int b;
    printf("enter the number a");
        scanf("%d",&a);
    printf("enter the number b");
        scanf("%d",&b);

  sum(a,b);


}



int sum (int a , int b){
    int z  = (a+b);
   
   printf("Sum of the number is : %d ",z );

}

