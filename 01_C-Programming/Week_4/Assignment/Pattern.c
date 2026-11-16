#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int hash = 1, space = n - 1;
    for (int i = 1; i <= n; i++)
    {

        for (int s = space; s > 0; s--)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {

            for (int j = 1; j <= hash; j++)
            {
                printf("-");
            }
        }
        else if (i % 2 != 0)
        {
            for (int j = 1; j <= hash; j++)
            {
                printf("#");
            }
        }
        hash += 2;
        space--;
        printf("\n");


    }

    int hash1 = hash -4, space1 = 1;

    for(int i= 1; i<=n; i++){


        for(int s = 1; s<=space1; s++){
            printf(" ");
        }
        if((i+n) %2 == 0){

            for(int j = hash1; j>0; j--){
                printf("-");
            }
        }else if((i+n)%2 != 0){

              for(int j = hash1; j>0; j--){
                printf("#");
            }
        }
        hash1-=2;
        space1++;
        printf("\n");
    }
    return 0;
}