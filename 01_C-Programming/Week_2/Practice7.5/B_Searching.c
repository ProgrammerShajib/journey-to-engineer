#include <stdio.h>
int main()
{

    int n, val;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &val);

 
    int count = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == val)
        {
            printf("%d", j);
            count++;
            break;
        }
    
    }

    if(count == 0){
        printf("-1");
    }

     

    return 0;
}