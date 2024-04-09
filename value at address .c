#include<stdio.h>
int main(){

   int age =34;
   int *ptr = &age;
   
   printf("%d", age);
   printf("%d",*ptr);
   printf("%d", *(&age));

  return 0;
}