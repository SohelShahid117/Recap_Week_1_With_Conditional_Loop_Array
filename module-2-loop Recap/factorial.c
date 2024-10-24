#include <stdio.h>

int main()
{
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
    // printf("hi\n");
    int n;
    // int fact;
    long long int fact;

    int testCase;
    scanf("%d", &testCase);
    for (int i = 1; i <= testCase; i++)
    {
        fact=1;
        scanf("%d", &n);
        if (n == 0)
        {
            fact = 1;
        }
        else
        {
            for (int i = n; i >= 1; i--)
            {
                fact =1ll*fact * i;
            }
        }
        printf("%lld\n", fact);
    }

    return 0;
}