#include<stdio.h>
int a[10]={1,2,3,3,3,5,7,7,7,7};
int size=10;
int n= 10;
void main()
{
	//for(int i=0;i<size;i++)
	int i=0;
	while(i<size)
	{
		if(a[i]!=a[i+1])
		{
			i++;
		}
		else
		{
			for(int j=i+1;j<size;j++)
			{
				a[j]=a[j+1];
			}
			size--;
		}
		
	}
	int p=0;
	while(p<n)
		{
			printf("%d",a[p]);
			p++;
		}
}
/*
i=0 
1,2,3,3,3,5,7,7,9,10
i=1
1,2,3,3,3,5,7,7,9,10
i=2
1,2,3,3,5,7,7,9,10,10
i=2
1,2,3,3,5,7,7,9,10,10

*/