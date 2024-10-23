#include <stdio.h>
int main()
{
    printf("hi\n");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d\n", a, b, c);

    if (a > b && a > c){
        printf("%d\n", a);
        if (b > c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);
    }

    else if (b > a && b > c){
        printf("%d\n", b);
        if (a > c)
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);
    }

    else{
        printf("%d\n", c);
        if (a > b)
        {
            printf("%d\n", a);
            printf("%d\n", b);
        }
        else
        {
            printf("%d\n", b);
            printf("%d\n", a);
        }
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);
    }

    return 0;
}