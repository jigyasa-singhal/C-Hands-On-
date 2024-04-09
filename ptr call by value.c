#include<stdio.h>
 //call by value
 void square(int n );
 int main (){//main function
    int n = 4;
    square(n);//argument
    printf("number = %d\n",n);
    return 0 ;
//output=16(value changes here)
 }

void square(int n){//parameter/formal parameter
    n = n*n;
    printf("square = %d\n",n);//output=4 (here value not changes because change occur in  copy ).
     
}
//we pass value of variable as a argument.
//square function perameter mein kuch bhi changes kre we changes main function ke argument ko change nhi krega
/*square print first in the output because the exceution of the program happen according to the code written.
firstly, square function complete then the code of the print the number execute so number print after the square*/



