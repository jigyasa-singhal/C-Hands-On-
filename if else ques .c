#include<stdio.h>
int main(){
    int marks;
    printf("enter marks obtained(0-100) : ");
    scanf("%d",&marks);

    if(0<marks && marks<=30){
        printf("Grade C\n");
    }
    else if(30<marks && marks<=70){
        printf("Grade B\n");
    }
    else if (70<marks && marks<=90){
         printf("Grade A\n ");
    }
    else if (90<marks && marks<=100 ){
        printf("Grade A+\n ");
    }
    else printf("Incorrect Marks");
    printf("Thank You");
    return 0;
}