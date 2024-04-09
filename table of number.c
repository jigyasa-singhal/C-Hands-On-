#include <stdio.h>

int main() {
    // Write C code here
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    int i=1;
    while(i<=10 ){
        printf("%d\n",n*i);
        i++;
    }
    

    return 0;
}


/* code in do while loop

    int i=1;
   do {
        printf("%d\n",n*i);
        i++;
    }
    while( i<=10);

*/