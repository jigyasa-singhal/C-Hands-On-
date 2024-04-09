#include<stdio.h>
int main (){
//* means value at address operator
//& address of varibale 
    int age = 5;
    int *ptr = &age;//pointer mein age ka address store hua
    int _age = *ptr;//_age new varibale means *ptr mein jo variable age store hai uski value kya hai.

    printf("%d",_age);
    return 0;
}