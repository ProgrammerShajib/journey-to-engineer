#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[10001];
        scanf("%s", &s);

        int cnt_Capital = 0, cnt_small = 0, cnt_Num = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                cnt_Num++;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cnt_Capital++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                cnt_small++;
            }
        }

        printf("%d %d %d\n", cnt_Capital, cnt_small, cnt_Num);
    }

    return 0;
}