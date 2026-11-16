#include <stdio.h>
#include<string.h>
int main()
{

    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
     
    int palindrom = 1;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            palindrom = 0;
        }
    }


    if(palindrom == 1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}