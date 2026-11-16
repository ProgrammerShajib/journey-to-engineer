#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        int val;
        scanf("%d", &val);
        if (val == 0)
        {
            printf("%d", val);
        }
        while (val != 0)
        {
            printf("%d ", val % 10);
            val = val / 10;
            /* code */
        }

        printf("\n");
    }

    return 0;
}

// Or you can use the do While loop
// #include <stdio.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {

//         int val;
//         scanf("%d", &val);

//         do
//         {

//             printf("%d ", val % 10);
//             val = val / 10;
//         } while (val != 0);
//         printf("\n");
//     }

//     return 0;
// }