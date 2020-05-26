#include<stdio.h>
int a[]={2,8,3,6};
int n= 4;
void part1()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("(%d,%d)",a[i],a[j]);
			if(i!=(n-1)||j!=(n-1))
				printf(",");
		}
	}
}
void part2()
{
	for(int i=0;i<n;i++)
	{
		for(int j=(i+1);j<n;j++)
		{
			
			printf("{%d,%d}",a[i],a[j]);
			if(i!=(n-2)||j!=(n-1))
				printf(",");
		}
	}
}
void part3()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				printf("(%d,%d,%d)",a[i],a[j],a[k]);
				if(i!=n-1||k!=n-1||j!=n-1)
					printf(",");
			}
		}
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
void subset(int p)
{
	for(int i=0;i<n;i++)
	{
		printf("(%d,",a[i]);
		subset(p-1);
		printf(")");
	}
	//printf("(");
	/*int i=0;
	while(i<p)
	{
		printf("%d",a[i]);
		i++;
	}*/
	//printf(")");
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
*/
void part5()
{
	for(int p=0;p<=n;p++)
		subset(p);
}
void main()
{
	/*part1(); 	
	printf("\n");
	part2();
	printf("\n");
	part3();
	printf("\n");
	part4();
	printf("\n");
	*/
	part5();
}


