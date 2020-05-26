#include<stdio.h>
#include<stdlib.h>
void main()
{	
	int n;
	scanf("%d",&n);
	for(int i=n;i>=2||i<-2;i--)
	{
		for(int j=1;j<=abs(i);j++)
		{
			printf("*_");
		}
		for(int k=1;k<=(n-1)*(n-abs(i));k++)
		{
			printf("_"); 
		}
		for(int j=1;j<=abs(i);j++)
		{
			printf("_*");
		}
		printf("\n");
	}
	/*for(int i=1;i<=n;i++)
	{
		for(int j=i;j>=1;j--)
		{
			printf("*_");
		}
		for(int k=(n-1)*(n-i);k>=1;k--)
		{
			printf("_"); 
		}
		for(int j=i;j>=1;j--)
		{
			printf("_*");
		}
		printf("\n");
	}*/
}
/*
*-*-*-*-*--*-*-*-*-*
*-*-*-*------*-*-*-*
*-*-*----------*-*-*
*-*--------------*-*
*------------------*
*/