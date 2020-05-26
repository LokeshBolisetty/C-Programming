#include<stdio.h>
void main()
{
    int n,x,y;
    //n=6;
    scanf("%d",&n);
    for(int k=2;pow(2,k)-1<=n;k++)
    {
        x=n/(pow(2,k)-1);
        y=n%(int)(pow(2,k)-1);
        if(y==0)
        {
            printf("%d",x);
        }
    }
}
