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
    // printf("now print the value:");
    //  for (int i = 0; i < n; i++)
    //  {
    //      printf("%d ", A[i]);
    //  }
    //  printf("\n");

    int min = A[0];
    int max = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    // printf("\n%d", min);
    // printf("\n%d", max);

    for (int i = 0; i < n; i++)
    {
        if (A[i] == min)
        {
            A[i] = max;
        }
        else if (A[i] == max)
        {
            A[i] = min;
        }
    }

    // printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}