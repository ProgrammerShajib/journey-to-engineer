#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int palindrom = 1;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (a[i] != a[j])
        {
            palindrom = 0;
        }
    }


    if(palindrom == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}