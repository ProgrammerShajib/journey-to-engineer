#include <stdio.h>
#include<stdbool.h>
int main()
{

    int n;
    int a[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477,
                  744, 747, 774, 777};

    int length = sizeof(a) / sizeof(a[0]);
    // printf("%d ", length);

    scanf("%d" , &n);
    // printf("%d", n);
    int lucky = false;
    for(int i = 0; i<length; i++){
        if(n % a[i] == 0){
            lucky = true;
        }
    }

    if(lucky){
        printf("YES");
    }else{
        printf("NO");
    }

    return 0;
}