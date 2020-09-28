#include <stdio.h>

int main(){
    int nInput,nTotal=0; //0으로 초기화 해주어야함.
    int i;
    for(i = 0; i < 3; i ++){
        printf("Enter a Numbers : ");
        scanf("%d",&nInput);
        nTotal+=nInput;
    }
    printf("Total : %d\n",nTotal);
    return 0;
}