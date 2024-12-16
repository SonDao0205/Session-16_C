#include<stdio.h>
void arrPtr(int numbers[]){
    int *ptrNumbers = numbers;
    for (int i = 0; i < 5; i++)
    {
        printf("Phan tu thu %d trong mang = %d\n",i,*(ptrNumbers+i));
    }
}
int main(){
    int numbers[5] = {1,2,3,4,5};
    arrPtr(numbers);
}