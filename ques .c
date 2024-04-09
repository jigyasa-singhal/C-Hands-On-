// swapping of the numbers can't be done by the call by the value it can't be change th value in the function.

#include<stdio.h>

void swap(int a, int b);

int main(){
    int x = 5;
    int y=4;
    swap(x,y);
    printf("x= %d & y=%d\n", x,y);
    return 0;
}

void swap(int a, int b){
    int temp= a;
      a=b;
      b=a;
       printf("x= %d & y=%d\n",a,b);
}