#include<stdio.h>
int main()
{
    //https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
    // printf("hi\n");
    int n;
    // long long int sum = 0;
    long long int sum;
    scanf("%d", &n);
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    sum=(1ll*n*(n+1))/2;
    printf("%lld",sum);

    return 0;
}