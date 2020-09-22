#include <stdio.h>

int main(void){
    char szName[32] = {0};
    int nAge = 0;
    
    printf("Your Age: ");
    scanf("%d",&nAge);

    printf("Your Name: ");
    gets(szName);

    printf("%s, %d\n",szName,nAge);
    //printf("%d, %s\n",nAge,szName);
    return 0;
}