#include <stdio.h>
#include <string.h>
int main(){
    char c[100];
    printf("Mời bạn nhập 1 chuỗi: ");
    gets(c);
    puts(c);
    printf("Độ dài chuỗi vừa nhập là: %d", strlen(c));
    return 0;
}