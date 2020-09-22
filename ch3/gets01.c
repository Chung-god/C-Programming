#include <stdio.h>

int main(void){
    char szName[32] = {0};

    printf("Name :");
    gets(szName);

    printf("Your Name ");
    puts(szName);
    return 0;
}