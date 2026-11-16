#include <stdio.h>
int main()
{

    int n, f;
    scanf("%d%d", &n, &f);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
 
    // int count0= 0, count1 = 0 , count2 =0, count3 = 0, count4 = 0, count5 = 0;
    int fre[f+1];
    for(int i =0; i<=f; i++){
        fre[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {

        int val = ar[i];
        fre[val]++;

        // if (ar[i] == 0)
        // {
        //     fre[0]++;
        // }
        // else if (ar[i] == 1)
        // {
        //     fre[1]++;
        // }
        // else if (ar[i] == 2)
        // {
        //     fre[2]++;
        // }
        // else if (ar[i] == 3)
        // {
        //     fre[3]++;
            
        // }
        // else if (ar[i] == 4)
        // {
        //     fre[4]++;
        // }
        // else if (ar[i] == 5)
        // {
        //     fre[5]++;
        // }
    }

    for(int i =0; i<=f; i++){

        printf("%d -> %d\n",i, fre[i]);
    }
    // printf("%d -> %d\n",1, fre[1]);
    // printf("%d -> %d\n",2, fre[2]);
    // printf("%d -> %d\n",3, fre[3]);
    // printf("%d -> %d\n",4, fre[4]);
    // printf("%d -> %d\n",5, fre[5]);


    return 0;
}