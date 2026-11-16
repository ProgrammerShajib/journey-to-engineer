#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); // scalar matrices must be square, so just take one dimension
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int diagonal = a[0][0]; // store first diagonal value
    int isScalar = 1; // assume true first

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j && a[i][j] != diagonal) // diagonal not same
                isScalar = 0;
            else if (i != j && a[i][j] != 0)   // non-diagonal not zero
                isScalar = 0;
        }
    }

    if(isScalar)
        printf("It's a scalar matrix.");
    else
        printf("It's not a scalar matrix.");
    
    return 0;
}
