#include<stdio.h>
#include<stdlib.h>
int addValue(int *arr,int *size,int index,int value);
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int index,value;
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d\n",i,arr[i]);
    }   
    printf("Nhap gia tri muon them : ");
    scanf("%d",&value);
    printf("Nhap vi tri muon them : ");
    scanf("%d",&index);
    addValue(arr,&size,value,index);
}
int addValue(int *arr,int *size,int value, int index){
    if (index < 0 || index >= *size)
    {
        printf("Vi tri khong hop le!\n");
        return 0;
    }
    (*size)++;
    for (int i = *size; i >= index; i--)
    {
        *(arr+i) = *(arr+i-1);
    }
    *(arr+index) = value;
    printf("\n");
    for (int i = 0; i < *size; i++)
    {
        printf("arr[%d] = %d\n",i,*(arr+i));
    }   
    return 0;
}
