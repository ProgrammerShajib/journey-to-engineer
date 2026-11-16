#include <stdio.h>
int main(){

    int a = 0 ;
    scanf("%c", &a);
     
    if(a>='a' && a<'z'){

        printf("%c", a+1);
    }else if(a == 'z'){
        printf("a");
    }
    return 0;
}