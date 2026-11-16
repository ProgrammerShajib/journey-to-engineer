#include <stdio.h>
int main()
{

    char s1[100], s2[100];
    scanf("%s%s", s1, s2);

    // printf("%s %s", s1, s2);

    int i = 0;
    while (1)
    {
        /* code */
        if (s1[i] == '\0' && s2[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if (s1[i] == '\0')
        {
            printf("s1 is small");
            break;
        }
        else if (s2[i] == '\0')
        {
            printf("s2 is small");
            break;
        }
        else if (s1[i] < s2[i])
        {
            printf("s1 is small.");
            break;
        }
        else if (s1[i] > s2[i])
        {
            printf("s2 is small.");
            break;
        }
        else if (s1[i] == s2[i])
        {
            i++;
        }
    }

    return 0;
}