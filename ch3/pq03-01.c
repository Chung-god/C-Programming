#include <stdio.h>

int main(){
    char szName[32] = {0};
    int age;
    puts("Your age : ");
    scanf("%d%*c",&age);//*c 은 문자 하나를 버려버린다는 의미 즉 여기서는 개행문자를 날려버린거임.
    puts("Your Name:");
    gets(szName);

    printf("Your age is %d, and name is %s\n",age,szName);

}