#include <stdio.h>
#include<string.h>
int main(){

    char a[11], b[11];
    scanf("%s%s", a, b);

    int len_a = strlen(a);
    int len_b = strlen(b);
    printf("%d %d\n", len_a, len_b);

    char sum[25];
    strcpy(sum, a);
    strcat(sum, b);

    printf("%s\n", sum);

    char temp , A, B;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);



    return 0;
}