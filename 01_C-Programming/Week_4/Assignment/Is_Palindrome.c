#include <stdio.h>
#include <string.h>

int is_palindrome(char a[], int length)
{
    int palindrome = 1;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {

        if (a[i] != a[j])
        {
            palindrome = 0;
            break;
        }
    }
    return palindrome;
}
int main()
{

    char c[1000];
    scanf("%s", c);
    int lenght = strlen(c);

    int palindrome = is_palindrome(c, lenght);

    if (palindrome == 1)
    {
        printf("Palindrome");
    }
    else if (palindrome == 0)
    {

        printf("Not Palindrome");
    }

    return 0;
}