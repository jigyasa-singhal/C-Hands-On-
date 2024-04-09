#include<stdio.h>
int main(){
    int n;
    printf("enter the character");
    scanf("%d",&n);

    if ( 0<=n && n<=1000){
        printf("It is a digit");
    }
    else if  ( 'a'<= 'n' && 'n'<= 'z'){
        printf("It is a alphabhet");

    }

    else {
    printf("Invalid Character");

}
}