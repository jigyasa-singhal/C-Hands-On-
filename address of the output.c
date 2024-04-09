#include<stdio.h>
void printAddress (int *a);//*a is a pointer in it address of the n saved.
int main(){
    int n = 4;
    printAddress(&n);
    printf("address is %p\n",&n);
    return 0;
}

void printAddress (int *a){
     printf("address are %p\n",a);
     //a stores the address of the n 
     
}
//Address of the output will be same if we used the call by the function.