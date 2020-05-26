#include<stdio.h>
int a[]={2,8,3,6};
int n= 4;
void subset(p)
{
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<n;j++)

	}
}


void main()
{
	for(int i=0;i<n;i++)
		subset(i);
}
/*
	for(int i=0;i<n;i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			
			printf("{%d,%d}",a[i],a[j]);
			if(i!=(n-2)||j!=(n-1))
				printf(",");
		}
	}
void part4()
{
	for(int i=0;i<n;i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			
			for(int k=(j+1);k<n;k++)
			{
				printf("{%d,%d,%d}",a[i],a[j],a[k]);
				if(i!=(n-3)||j!=(n-2)||k!=(n-1))
					printf(",");
			}

		}
	}
}
*/