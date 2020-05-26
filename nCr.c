#include<stdio.h>
int Binomial(int n,int r)
{
    if(n==r||r==0)
    {
        return 1;
    }
    return (Binomial(n-1,r)+Binomial(n-1,r-1));

}
void main()
{
   int n,r;
   printf("Enter the first number:");
   scanf("%d",&n);
   printf("Enter the second number:");
   scanf("%d",&r);
   int result=Binomial(n,r);
   printf("C(%d,%d) is %d",n,r,result);
}
