#include <stdio.h>
int main()
{
    // https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
    //  printf("hello\n");
    //  char ch = "B";
    //  char ch = 'B';
    char ch;
    scanf("%c", &ch);
    // scanf('%c', &ch);
    // printf("%c\n", ch);
    // printf("%d\n", ch);

    // int n = "%d\n", ch;
    // printf(n);

    /*
    if ("%c\n", ch >= 65 && "%c\n", ch <= 90)
    {
        printf("%c\n", ch + 32);
    }
    else if ("%c\n", ch >= 97 && "%c\n", ch <= 122)
    {
        printf("%c\n", ch - 32);
    }
    */

    if ('A' <= ch && 'Z' >= ch)
    {
        printf("%c\n", ch + 32);
    }
    else if ('a' <= ch && 'z' >= ch)
    {
        printf("%c\n", ch - 32);
    }

    return 0;
}