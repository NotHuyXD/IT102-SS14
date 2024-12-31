#include <stdio.h>
#include <string.h>
int main(){
    char c[]= "Chào mừng bạn đến với Rikkei Education";
    int count=0;
    int length = strlen(c);

    for (int i = 0; i < length; i++) {
        if ((i == 0 || c[i-1] == ' ') && c[i] != ' ') {
            count++;
        }
    }

    printf("Số từ trong chuỗi là: %d\n", count);
    return 0;
}