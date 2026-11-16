#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  // since it's square, one size is enough
    int a[n][n];

    // Input matrix
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int isUnit = 1; // assume it's unit

    // Check conditions
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i == j && a[i][j] != 1) // diagonal not 1
                isUnit = 0;
            else if (i != j && a[i][j] != 0) // non-diagonal not 0
                isUnit = 0;
        }
    } 

    // Output result
    if(isUnit)
        printf("It's a unit matrix.");
    else
        printf("It's not a unit matrix.");

    return 0;
}
