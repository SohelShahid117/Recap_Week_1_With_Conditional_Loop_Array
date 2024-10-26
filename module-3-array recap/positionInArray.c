#include <stdio.h>
int main()
{

    // https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
    // printf("hi\n");

    int n;
    scanf("%d", &n);
    int A[n];
    if (n >= 2 && n <= 1000)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &A[i]);
        }
    }
    // A[0] = 5;
    // // scanf("%d",&A[i])
    // printf("%d\n", A[0]);
    // printf("now print the value\n");

    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", A[i]);
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }

    return 0;
}