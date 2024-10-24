#include <stdio.h>
int main()
{
    //https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
    printf("hi\n");
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        int star = (2 * i) - 1;
        for (int j = space; j >= 1; j--)
        {
            // printf("#");
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        // for (int j = space; j >= 1; j--)
        // {
        //     // printf("#");
        //     printf(" ");
        // }
        printf("\n");
    }

    for (int i = n; i >= 1; i--)
    {
        int space = n - i;
        int star = (2 * i) - 1;
        for (int j = space; j >= 1; j--)
        {
            // printf("#");
            printf(" ");
        }
        for (int k = 1; k <= star; k++)
        {
            printf("*");
        }
        // for (int j = space; j >= 1; j--)
        // {
        //     // printf("#");
        //     printf(" ");
        // }
        printf("\n");
    }

    return 0;
}