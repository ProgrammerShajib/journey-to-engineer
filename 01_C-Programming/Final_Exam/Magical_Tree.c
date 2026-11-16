#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int upper_last_line_star = 10 + n;
    int upper_line = (upper_last_line_star + 1) / 2;

    int star = 1, space = (upper_last_line_star - star) / 2;
 
    for (int a = 0; a < upper_line; a++)
    {
        for (int s = space; s > 0; s--)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");

        star = star + 2;
        space--;
    }


 
 

    for (int i = 0; i < 5; i++)
    {
        for (int space = 0; space < 5; space++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}