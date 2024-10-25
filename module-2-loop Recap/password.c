#include<stdio.h>
int main(){
    //printf("hi\n");

    int x;
    int correctPassword = 1999;
    // printf("%d",e4);

    for(int i=1000;i<=9999;i++){
        scanf("%d",&x);
        if (x>=1000 && x<=9999)
        {
            if(x==correctPassword){
                printf("Correct\n");
                break;
            }
            else{
                printf("Wrong\n");
            }
        }
        
    }


    return 0;
}