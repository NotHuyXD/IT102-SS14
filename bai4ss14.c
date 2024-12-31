#include <stdio.h>
#include <string.h>
int main(){
    char c[]= "Chào mừng bạn đến với Rikkei Education";
    int count=0;
    char search;
    printf("Mời bạn nhập ký tự: ");
    scanf("%c", &search);
    for (int i=0;i<strlen(c);i++){
        if (c[i]==search){
            count++;
        }
    }
    if (count==0){
        printf("Ký tự %c không xuất hiện trong chuỗi", search);
        return 0;
    } 
    printf("Ký tự %c xuất hiện %d lần trong chuỗi", search, count);
    return 1;

}