#include<stdio.h>
void swap(int *ptrA,int *ptrB){
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}
int main(){
    int a = 10;
    int b = 20;
    printf("Gia tri truoc khi swap :\na = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("Gia tri sau khi swap :\na = %d\nb = %d\n",a,b);
}