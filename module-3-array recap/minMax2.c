#include <stdio.h>
int main()
{
    // printf("hello\n");
    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

    int n;
    scanf("%d", &n);
    int A[n];
    if (n >= 2 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
    }

    int min = A[0];
    int max = A[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] <= min)
        {
            min = A[i];
            minIndex = i;
        }
        if (A[i] >= max)
        {
            max = A[i];
            maxIndex = i;
        }
    }

    // printf("\n%d %d", minIndex, min);
    // printf("\n%d %d\n", maxIndex, max);
    A[minIndex] = max;
    A[maxIndex] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}