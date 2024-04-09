#include<stdint.h>
int main(){

    char star = '*';
    char *ptr = &star;
    char value = *ptr;

    printf("%c",value);

    return 0;
}