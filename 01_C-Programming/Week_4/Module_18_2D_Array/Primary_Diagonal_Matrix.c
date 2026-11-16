#include <stdio.h>
#include<stdbool.h>
int main()
{

    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r == c)
    {
        // It's a square matrix
        printf("This is a Primary Diagonal Matrix.\n");
        int  is_diagonal = 1;
        for(int i = 0; i<r; i++){
            for(int j =0; j<c; j++){
                if(i != j){
                     if(a[i][j] != 0){
                        is_diagonal = 0;
                     }


                } 

            }
        }
        printf("%d ", is_diagonal);
        if(is_diagonal == 1){
            printf("This is a diagonal Matrix.\n");
        }else{
            printf("This is not a diagonal matrix.\n");
        }
    }
    else
    {
        printf("This is not a diagonal Matrix.");
    }



    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}