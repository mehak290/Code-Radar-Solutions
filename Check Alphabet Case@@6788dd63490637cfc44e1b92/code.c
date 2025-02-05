#include <stdio.h>
int main(){
    char ch;
    scanf('%s',&ch);
    if(isupper(ch)){printf("Uppercase");}
    else{printf("Lowercase");}
}