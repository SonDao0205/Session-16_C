#include<stdio.h>
#include<string.h>
int main(){
    char inputString[100];
    char *reverseString[100];
    printf("Nhap chuoi : ");
    fgets(inputString,100,stdin);
    char *ptr = reverseString;
    for (int i = strlen(inputString) - 1; i >= 0; i--) {
        *ptr = inputString[i];
        ptr++;
    }
    printf("Chuoi ban dau : %s\n",inputString);
    printf("Chuoi dao nguoc: %s\n",reverseString);
}