#include <stdio.h>
int main(){

    int a, b;
    scanf("%d", &a);

    char s[a];
    for(int i = 0; i<a; i++){

        scanf(" %c", &s[i]);
    }

     

    
    scanf("%d", &b);

    char s2[b];
    for(int i = 0; i<b; i++){

        scanf(" %c", &s2[i]);
    }
    

    char sum[a+b];

    for(int i = 0; i<a; i++){

        sum[i] = s[i];
    }
    for(int i = 0; i<b; i++){

        sum[i+a] = s2[i];
    }

     for(int i = 0; i<a+b; i++){

        printf("%c", sum[i]);
    }

    
    return 0;
}