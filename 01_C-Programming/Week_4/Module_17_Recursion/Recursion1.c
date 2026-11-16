#include<stdio.h>
void Mello(int i )
{
    if(i==11){
        return;
    }
    Mello(i+1);
    printf("%d. Mello\n", i);
}
int main()
{

    // printf("Hello\n");
    Mello(1);
    return 0;
}