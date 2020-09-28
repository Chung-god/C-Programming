#include <stdio.h>

int main(){
    int nMax = 0;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    nMax = a >= (b >= c ? b : c) ? a : (b >= c ? b : c);
    printf("MAX : %d\n",nMax);
}