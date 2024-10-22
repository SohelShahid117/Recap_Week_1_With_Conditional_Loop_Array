#include <stdio.h>

int main()
{
    // https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
    /*
    printf("hi\n");
    int a, b;
    char s;
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);

    getchar();
    scanf("%c", &s);
    printf("%c\n", s);

    if (s == '>')
    {
        if (a > b)
        {
            printf("greater:Right");
        }
        else
        {
            printf("greater:Wrong");
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            printf("less : Right");
        }
        else
        {
            printf("less : Wrong");
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            printf("equal=Right");
        }
        else
        {
            printf("equal=Wrong");
        }
    }
    */

    int a, b;
    char s;
    // getchar();
    scanf("%d %c %d", &a, &s, &b);
    printf("%d %c %d\n", a, s, b);

    if (s == '>')
    {
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }

    return 0;
}