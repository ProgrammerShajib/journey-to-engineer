#include <stdio.h>

int main(){
    for (int i = 1; i<=10; i++)
    {
        // printf("%d Hello \n", i); // no change 
        if(i == 5){
            continue;
        }
        printf("%d Hello \n", i);
    }
}