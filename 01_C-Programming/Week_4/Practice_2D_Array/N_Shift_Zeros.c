#include <stdio.h>

int ZeroShift(int a[], int n)
{

    int result[n], index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            result[index] = a[i];
            index++;
        }
    }

    // while (index<n)
    // {
    //     result[index] =0;
    //     index++;
    //     /* code */
    // }

    for(int i = index; i<n; i++){
        result[i] = 0;
    }

    for(int i =0;i<n;i++){
        printf("%d ", result[i]);
    }
    
}
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    ZeroShift(a, n);

    return 0;
}