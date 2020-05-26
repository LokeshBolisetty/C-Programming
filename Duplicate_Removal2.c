#include<stdio.h>
void main()
{
	int A[]={5,5,10,10,20,20,30,40,40};
	int a=10;
	int b=1;
	int i=0;
	while(i<a)
	{
		if(A[i]!=A[i+1])
		{
			A[b]=A[i+1];
			b++;
		}
		i++;
	}
	int p=0;
	while(p<10)
	{
		printf("%d",A[p]);
		p++;
	}

}