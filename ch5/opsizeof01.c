#include <stdio.h>

int main(){
    int nData =1000;
    printf("%d\n",sizeof(nData));
    printf("%d\n",sizeof(nData + 100000000000000000000000000000000));
}