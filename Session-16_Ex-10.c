#include<stdio.h>
void addValue(int numbers[],int index){
    int size = 7;
    for (int i = index; i < size; i++)
    {
        numbers[index] = numbers[index+1];
    }
    size--;
    for (int i = 0; i < size; i++)
    {
        printf("numbers[%d] = %d\n",i, numbers[i]);
    }    
}
int main(){
    int numbers[7] = {1,2,3,4,5,6,7};
    int index;
    printf("Nhap vi tri muon xoa : ");
    scanf("%d",&index);
    addValue(numbers,index);
}