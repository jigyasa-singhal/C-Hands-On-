// Swap(interchange) the two numbers a &b without a third variable 
//swap of the numbers in the main function or in the address

#include<stdio.h>

void swap(int *a , int*b);


//call by reference
int main(){
    
    
    int x =5;
    int y = 4;
    swap(&x,&y);
    printf("x = %d & y = %d" , x,y);
    return 0;
}


void swap (int *a,int*b){
    *a= 4;
    *b= 5;
     printf("x = %d & y = %d" ,*a,*b);
}

/*Doubt = 
 *a= 4; *b= 5; ke place pr agar hmm  *a= &y; *b= &a;
krte hai to error show ho rha hai reason nhi pata hai */