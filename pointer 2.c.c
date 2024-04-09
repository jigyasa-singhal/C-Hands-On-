#include<stdio.h>
int main(){
    // ptr is a variable stores the address of the other variable.
    //* value of the address ( address ki jo value hai)
    //& address of the variable 
     
    // ptr= &age * denotes that the value of the pointer is the address of the varibale.




    int age = 5;
    int *ptr= &age;
    int **pptr = &ptr;
    printf("%d", **pptr);

    return 0;
}