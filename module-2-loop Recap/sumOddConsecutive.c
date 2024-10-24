#include <stdio.h>
int main()
{
    // https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S
    printf("hello\n");
    int a, b, testCase;
    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d", &a, &b);

        int temp;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        printf("%d %d\n", a, b);

        int sum = 0;
        
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }


    /*
    scanf("%d %d", &a, &b);
    printf("%d %d\n", a, b);

    int temp;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    printf("%d %d\n", a, b);
    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }
    printf("%d\n", sum);
*/
    return 0;
}