#include<stdio.h>

void part1() 
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d",n);
           /*for(int k=1;k<=j;k++)
           {
               printf("\t");
           }*/
       }
   }  
}