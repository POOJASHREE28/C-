#include <stdio.h>

int main() {
   int n,i,fact=1;
   float sum=0;
   printf("enter n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
       sum=sum+fact/i;
   }
   printf("%f",sum);
}