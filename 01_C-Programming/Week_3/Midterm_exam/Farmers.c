#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int arr[3] = {0};
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }

        int result = (arr[0] * arr[2]) / (arr[0] + arr[1]);
        int final_result = arr[2] - result;

        printf("%d\n", final_result);
    }
    return 0;
}