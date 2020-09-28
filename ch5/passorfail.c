#include <stdio.h>

int main(){
    int height;
    printf("Enter a height : ");
    scanf("%d",&height);
    printf("%s\n",height >= 150 ? "Pass" : "Fail");
}