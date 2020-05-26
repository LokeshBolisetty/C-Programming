#include<stdio.h>
void main()
{
	int C[4]={0,0,0,0},val = 2,d=4,i=d-1;
	while(i>0)
	{
		for(i=d-1;i>0;i--)
		{
			if(C[i]>=val && i>0)
			{
				C[i]=0;
			}
		}
	}
	C[i]++;
}