#include <stdio.h>
int main()
{
    // printf("hi\n");
    //  https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

    int n;
    scanf("%d", &n);

    int A[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // printf("\n");

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", A[i]);
    // }

    int min = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] <= min)
        {
            min = A[i];
        }
    }
    // printf("\n%d\n", min);

    int luck = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == min)
        {
            luck++;
        }
    }

    // printf("\nlucky number is :%d\n", luck);

    if (luck % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}