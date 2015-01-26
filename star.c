#include<stdio.h>
void main()
{
int i,j,k;
int n;
int x;
printf("enter the number of stars");
scanf("%d",&n);
x=n;
for(i=1;i<=x;i++)
{
   for(k=1;k<=n;k++)
    {
     printf(" ");
     }
   for(j=1;j<=i;j++)
   {
     printf("*");
     printf(" ");
   }
printf("\n");
n=n-1;
}
}

