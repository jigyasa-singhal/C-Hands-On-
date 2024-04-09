#include<stdio.h>

//declartaion/prototype

void printHello();
void printGoodBye();

//function call
int main(){
    printHello();
    printGoodBye();

    return 0;
}

// function declaration

void printHello(){
    printf("Hello\n");
}
void printGoodBye(){
    printf("Good Bye\n ");
}