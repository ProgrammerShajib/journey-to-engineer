#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    scanf("%s%s", a, b);

    // 0 → if strings are equal
    // < 0 → if first string is smaller
    //  > 0 → if first string is greater
    
    int result = strcmp(a, b);

    if(result == 0){
        printf("Equal");
    }else if(result < 0){
        printf("A is smaller.");
    }else if(result > 0){
        printf("B is smaller.");
    }
    // printf("%d\n", result);

    return 0;
}
