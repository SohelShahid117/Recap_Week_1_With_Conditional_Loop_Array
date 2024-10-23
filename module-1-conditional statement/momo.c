#include <stdio.h>
int main(){
    //https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
    //printf("hi\n");
    long long int a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    //printf("%d %d %d\n", a, b, k);
    
    /*
    if(a>=1 && b>=1 && k>=1){
    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }
    else if (a % k == 0 && b % k != 0)
    {
        printf("Memo");
    }
    else if (a % k != 0 && b % k == 0)
    {
        printf("Momo");
    }
    else if (a % k != 0 && b % k != 0)
    {
        printf("No One");
    }
    }
    */
   if(a>=1 && b>=1 && k>=1){
    if (a % k == 0 && b % k == 0)
    {
        printf("Both");
    }
    else if (a % k == 0)
    {
        printf("Memo");
    }
    else if (b % k == 0)
    {
        printf("Momo");
    }
    else 
    {
        printf("No One");
    }
    }


    return 0;
}