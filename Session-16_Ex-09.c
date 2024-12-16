#include<stdio.h>
void addValue(int numbers[],int index,int value){
    int size = 7;
    size++;
    for (int i = size-1; i > index; i--)
    {
        numbers[i] = numbers[i-1];
    }
    numbers[index] = value;
    for (int i = 0; i < size; i++)
    {
        printf("numbers[%d] = %d\n",i, numbers[i]);
    }    
}
int main(){
    int numbers[7] = {1,2,3,4,5,6,7};
    int index,value;
    printf("Nhap gia tri muon them : ");
    scanf("%d",&value);
    printf("Nhap vi tri muon them : ");
    scanf("%d",&index);
    addValue(numbers,index,value);
}