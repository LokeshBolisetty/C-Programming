#include<stdio.h>
int main()
{
    int ki,pi;
    int m,n,a;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&a);
    ki=n/a;
    pi=m/a;
    if(n%a!=0)
        ki=ki+1;
    if(m%a!=0)
        pi=pi+1;
    printf("%d",ki*pi);
    return 0;
}
