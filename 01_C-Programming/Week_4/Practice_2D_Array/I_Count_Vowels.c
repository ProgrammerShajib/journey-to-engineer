#include <stdio.h>

int countVowel(char a[], int i)
{
    if(a[i] == '\0'){
        return 0;
    }

    int cnt = countVowel(a, i+1);

    if(a[i] == 'a' || a[i] == 'A' ||a[i] == 'e' ||a[i] == 'E' ||a[i] == 'i' ||a[i] == 'I' ||a[i] == 'o' ||a[i] == 'O' ||a[i] == 'u' ||a[i] == 'U'){
        return cnt+1;
    }else{
        return cnt;
    }
    
}


int main()
{

    char s[201];
    fgets(s, 201, stdin);
    int ans = countVowel(s, 0);
    printf("%d", ans);
    // printf("%s", s);
    return 0;
}