#include<stdio.h>
int main (){

    int *ptr;
    int x;


    int x = 0;
    int ptr = &x;
    int *ptr = 0;


    printf("%d", x);
    printf("%d", &x);
    printf("%d", *ptr);

    return 0;

}