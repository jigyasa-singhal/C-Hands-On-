#include<stdio.h>
int main(){
    int x;
    float y;
    char z;
 printf("enter the character ");
   scanf("%d",&x);
   scanf("%f",&y);
   scanf("%c",&z);
   
    if(0<x && x<=100){
        printf("It is a Integer Number");
    }
        else if(100<x){
            
        printf("Invalid Number");

     }
      else if ('A'<= y && y<= 'Z' ){
       printf("It is a Alphabhet");
     }
     else if (0.00<=z && z<=100.00){
        printf("It is a Float Value");
     }
     else printf(" No value");

     return 0;

}