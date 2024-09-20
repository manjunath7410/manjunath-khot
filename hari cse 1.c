#include<stdio.h>
void main()
{
 int n,i,j,k;
 printf("enter number of rows:\n");
 scanf("%d",&n);
 for(i=1;k=n;i++)
 {
   for(k=0;k<n-i;k++)
  {
   printf(" ");
  }
   for(j=1;j<=i;j++)
    {
     print("%d",j);
    }
     j--;
     if(i==j)
     {
     for(j=j-1;j>=1;j--)
     {
      printf("%d",j);
      }
     }
   printf("\n");
 }
}

