#include<stdio.h>
void sortArr(int numbers[]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-1-i; j++)
        {
            if (numbers[j+1]<numbers[j])
            {
                int temp = numbers[j];
                numbers[j]= numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}
int main(){
    int numbers[5] = {8,5,6,1,3};
    printf("Mang truoc khi sap xep : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n",i,numbers[i]);
    }
    sortArr(numbers);
    printf("Mang sau khi sap xep : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n",i,numbers[i]);
    }
}