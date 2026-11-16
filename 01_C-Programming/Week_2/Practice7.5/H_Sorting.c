// #include <stdio.h>
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int minIndex, temp;

//     for (int i = 0; i < n - 1; i++)
//     {
//         minIndex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }

//         temp = arr[i];
//         arr[i] = arr[minIndex];
//         arr[minIndex] = temp;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    // input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 0; i < n - 1; i++)       // outer loop
    {
        for (int j = 0; j < n - i - 1; j++)  // inner loop
        {
            if (arr[j] > arr[j + 1])  // compare adjacent
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
