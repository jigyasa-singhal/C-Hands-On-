#include <stdio.h>

int main() {
   int age = 56;
   int *ptr = &age;
   
   //%u and &p used for the pointer address
   printf("%u",ptr);

    return 0;
}

//%d is used as the format specifier for the value at address.