#include<stdio.h>
int main()
{

    int i , j ,  k;
    scanf("%d",&i);

    if(i%4==0){
        if (i%100==0){
            if(i%400==0){
                printf("leap year");
                else
                    printf("not leap year");


            }


           printf("leap year");
            else
                printf("not leap year");
                    }
        }

    return 0;
}
