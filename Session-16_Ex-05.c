#include<stdio.h>
void arrPtr(int numbers[],int index,int value){
    numbers[index] = value;
    int *ptrNumbers = numbers;
    for (int i = 0; i < 5; i++)
    {
        printf("Phan tu thu %d trong mang = %d\n",i,*(ptrNumbers+i));
    }
}
int main(){
    int numbers[5] = {1,2,3,4,5};
    int index,value;
    printf("Nhap gia tri muon cap nhat : ");
    scanf("%d",&value);
    printf("Nhap vi tri muon cap nhat : ");
    scanf("%d",&index);
    arrPtr(numbers,index,value);
}