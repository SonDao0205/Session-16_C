#include<stdio.h>
int main(){
    int a = 5;
    int *ptrA = &a;
    printf("Cach 1:\n");
    printf("Gia tri cua bien la : %d\n",a);
    printf("Dia chi cua bien a la : %d\n",&a);
    printf("Cach 2:\n");
    printf("Gia tri cua bien la : %d\n",*ptrA);
    printf("Dia chi cua bien a la : %d\n",ptrA);
}
