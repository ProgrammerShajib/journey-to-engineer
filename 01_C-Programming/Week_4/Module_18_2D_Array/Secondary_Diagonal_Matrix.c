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
        printf("This is a Matrix.\n");
        int  is_diagonal = 1;
        for(int i = 0; i<r; i++){
            for(int j =0; j<c; j++){
                if(i+j != r-1){ // checking is it a secondary diagonal matrix or not
                     if(a[i][j] != 0){
                        is_diagonal = 0;
                     }


                } 

            }
        }
        printf("%d ", is_diagonal);
        if(is_diagonal == 1){
            printf("This is a secondary diagonal Matrix.\n");
        }else{
            printf("This is not a secondary diagonal matrix.\n");
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