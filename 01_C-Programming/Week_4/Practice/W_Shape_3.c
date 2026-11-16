#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }

        space--;
        star += 2;
        printf("\n");
    }

    // printf("%d", space);

    int star2 = star - 2, space1 = 0;

    for (int i = 1; i <n ; i++)
    {
        for (int j = 1; j <= space1; j++ )
        {
            printf(" ");
        }
        for (int j = star2; j > 0; j--)
        {
            printf("*");
        }
        star2 -=2;
        space1++;
        printf("\n");
    }
    return 0;
}