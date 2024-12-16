#include<stdio.h>
int searchItem(int numbers[],int value){
    int index;
    int *ptrNumbers = numbers;
    for (int i = 0; i < 7; i++)
    {
        if ((*ptrNumbers+i) == value)
        {
            index = i;
        }      
    }
    return index;
}
int main(){
    int numbers[7] = {1,2,3,4,5,6,7};
    int value;
     printf("Nhap gia tri muon tim trong mang : ");
    scanf("%d",&value);
    printf("Vi tri cua phan tu trong mang la : %d",searchItem(numbers,value));
}