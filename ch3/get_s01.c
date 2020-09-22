#include <stdio.h>

int main(){
    char szName[32] = {0};

    printf("Name : ");
    gets_s(szName,sizeof(szName));

    printf("Your Name: ");
    puts(szName);
    puts("it is");
    return 0;
}