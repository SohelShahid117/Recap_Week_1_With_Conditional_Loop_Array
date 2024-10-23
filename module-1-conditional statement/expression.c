#include <stdio.h>
int main()
{
    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
    //printf("hi\n");

    
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);
    //printf("%d %c %d %c %d\n", a, s, b, q, c);
    if (s == '+')
    {
        int result = a + b;
        if (result == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", result);
        }
    }
    else if (s == '-')
    {
        int result = a - b;
        if (result == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", result);
        }
    }
    else if (s == '*')
    {
        int result = a * b;
        if (result == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", result);
        }
    }

    return 0;
}