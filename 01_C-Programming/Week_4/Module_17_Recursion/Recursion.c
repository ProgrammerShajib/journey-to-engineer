#include<stdio.h>
void Mello(int i )
{
    if(i==11){
        return;
    }
    printf("%d. Mello\n", i);
    Mello(i+1);
}
int main()
{

    // printf("Hello\n");
    Mello(1);
    return 0;
}