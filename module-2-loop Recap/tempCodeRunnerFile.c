#include <stdio.h>

int main()
{
    printf("hi\n");
    int n;
    int fact;

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
                fact = fact * i;
            }
        }
        printf("%d\n", fact);
    }

    return 0;
}