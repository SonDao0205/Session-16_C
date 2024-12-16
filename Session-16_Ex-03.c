#include<stdio.h>
int sum(int *ptrNum1, int *ptrNum2){
    int sum = *ptrNum1 + *ptrNum2;
    return sum;
}
int main(){
    int num1 = 10;
    int num2 = 20;
    printf("%d + %d = %d\n",num1,num2,sum(&num1,&num2));
}