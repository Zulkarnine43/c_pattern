#include<stdio.h>
int main()
{
    int s[100][100],p[100][100],a,b,c,d,i,j;
    printf("Enter row:");
    scanf("%d",&a);
    printf("Enter col:");
    scanf("%d",&b);

    printf("Enter array:");
    for(i=0;i<a;i++){
    for(j=0;j<b;j++){

            scanf("%d",&s[i][j]);

    }
    }
   // for(i=0;i<a;i++){
    //for(j=0;j<b;j++){
       //     printf("%d\n",s[i][j]);

   // }
   // }
    printf("Enter array:");
    for(i=0;i<a;i++){
    for(j=0;j<b;j++){

            scanf("%d",&p[i][j]);

    }
    }
      for(i=0;i<a;i++){
    for(j=0;j<b;j++){

            printf("Sum is %d",s[i][j]+p[i][j]);

    }
    }
    return 0;

}






