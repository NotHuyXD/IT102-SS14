#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char c[]= "9119287 gia huy 29112006 rikkei";
    int count=0;
    for (int i=0;i<strlen(c);i++){
        if (!isdigit(c[i]) && !isspace(c[i])){
            count++;
        }
    }
    printf("Số ký tự là chữ cái trong chuỗi là: %d", count);
    return 0;
}