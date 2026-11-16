#include <stdio.h>
void Gello()
{
    printf("Gello\n");
}
void Solle()
{
    printf("Solle\n");
    Gello();
}
void Mello()
{
    printf("Mello\n");
    Solle();
}
int main()
{

    printf("Hello\n");
    Mello();
    return 0;
}