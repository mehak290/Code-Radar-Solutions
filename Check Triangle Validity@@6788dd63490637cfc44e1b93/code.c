#include <stdio.h>
#inclue <math.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c){printf("Valid");}
    else if(b+c>a){printf("Valid");}
    else if(c+a>b){printf("valid");}
    else{printf("Invalid");}
    return 0;
}