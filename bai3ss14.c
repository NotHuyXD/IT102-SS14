#include <stdio.h>
#include <string.h>
int main(){
    char c[]= "Rikkei Education";
    char reverse[100];
    int j=0;
    for (int i=strlen(c)-1;i>=0;i--){
        reverse[j]=c[i];
        j++;
    }
    reverse[j]='\0';
    printf("Chuỗi đảo ngược là: %s", reverse);
    return 0;
}