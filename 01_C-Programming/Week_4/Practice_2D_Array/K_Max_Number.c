// #include <stdio.h>
// int max(int a[], int n, int i)
// {

//     if (n == 0)
//     {
         
//         return a[n];
//     }

//     int maxValue = max(a, n - 1, i + 1);
//     if (maxValue < a[i])
//     {
//         maxValue = a[i];
//     }

//     return maxValue;
// }
// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int val = max(a, n, 0);
//     printf("%d", val);

//     return 0;
// }



#include <stdio.h>

int  max(int a[], int n, int i){
   if(n == 0 ){
    return a[n];
   }

   int maxValue = max(a, n-1, i+1);

   if(maxValue < a[i]){
    maxValue = a[i];
   }


   return maxValue;


}
int main(){

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i =0; i< n; i++){
        scanf("%d", &a[i]);
    }

    int ans = max(a, n, 0);
    printf("%d", ans);
    return 0;
}