#include <stdio.h>

int main(){
    char a ;
    scanf("%c", &a);
    
    if(a>='a' && a<='z'){
        int ans = a - 32;
        printf("%c", ans);
    }else{
        printf("%c", a+32);
    }
    return 0;

}