#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int ar[n];
    for(int i =0; i <n; i++){
        scanf("%d", &ar[i]);
    }

    int count0= 0, count1 = 0 , count2 =0, count3 = 0, count4 = 0, count5 = 0; 
    for(int i =0; i <n; i++){

        if(ar[i] == 0){
            count0++;
        }else if(ar[i] == 1){
            count1++;
        }
        else if(ar[i] == 2){
            count2++;
        }
        else if(ar[i] == 3){
            count3++;
        }
        else if(ar[i] == 4){
            count4++;
        }
        else if(ar[i] == 5){
            count5++;
        }
    }

    printf("%d\n", count0);
    printf("%d\n", count1);
    printf("%d\n", count2);
    printf("%d\n", count3);
    printf("%d\n", count4);
    printf("%d\n", count5);
    return 0;
}