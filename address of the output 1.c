#include<stdio.h>
void printAddress(int n);
//Address of the output will not be same if we use the call by value.
int main (){
int n = 4;
printf("value = %p\n",&n);
printAddress(n);
return 0;   
}

void printAddress(int n){
    printf("%p\n",&n);
}