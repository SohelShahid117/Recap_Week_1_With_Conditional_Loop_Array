#include<stdio.h>
int main(){
    printf("hi\n");
    int n;
    scanf("%d",&n);
    printf("%d",n);
    for(int i=1;i<=n;i++){
        int star = (2*i)-1;
        for(int j=n;j>=i;j--){
            // printf("#");
            printf(" ");
        }
        for(int k=1;k<=star;k++){
             printf("*");
        }
        printf("\n");
    }


    return 0;
}