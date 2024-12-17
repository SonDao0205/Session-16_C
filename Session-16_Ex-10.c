#include<stdio.h>
#include<stdlib.h>
int removeValue(int *arr,int *size,int index);
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int index, size = sizeof(arr)/sizeof(int);
    printf("Nhap vi tri ban muon xoa : ");
    scanf("%d",&index);
    removeValue(arr,&size,index);
}


int removeValue(int *arr,int *size,int index){
    if (index < 0 || index >= *size)
    {
        printf("Khong hop le!");
        return 0;
    }
    for (int i = index; i < *size; i++)
    {
        *(arr+i) = *(arr+i+1);
    }
    (*size)--;
    
    for (int i = 0; i < *size; i++)
    {
        printf("%d\t",*(arr+i));
    }
    return 0;
}
