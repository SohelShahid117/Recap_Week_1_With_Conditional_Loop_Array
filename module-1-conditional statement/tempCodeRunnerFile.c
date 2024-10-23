 if (a > b && a > c)
    {
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
        printf("\n\n");
        printf("%d\n%d\n%d\n", a, b, c);
    }