//write a function that prints namaste if user is indian and bhonjour if user is french.

#include<stdio.h>


//declartaion/prototye
void printnamaste();
void printbhonjur();

//function call
int main(){

    char a;
    printf("Enter the nationlaity (choose from i for indian or f for french)");
    scanf("%c",&a);

    if (a == 'i') {
       printnamaste();//function
    }
        else {
       printbhonjur();//function
    }
    
    return 0 ;
}

// function declartaion

void printnamaste (){
    printf("Namaste");
}
void printbhonjur (){
    printf("Bhonjur");
}