#include <stdio.h>

int main() {
	//code#include<stdio.h>
	int j,k,T,N;
	char a[200];
	scanf("%d",&T);
	for (int i=1;i<=T;i++)
	{	int count=0;
		scanf("%d",&N);
		for(k=0;k<N-1;k++)
		{
		    for(j=0;j<N-1;j++)
		    {
		    	scanf("%c",&a[j][k]);
		    }
		}
		for(j=0,k=0;k<N-1&&j<N-1;k++,j++)
		{
			if(a[j][k]!='.' && a[j+N][k+N]!='.')
			count++;
		}
		printf("%d",&count);
		while(T!=i)
		{
			printf("\n");
		}
	}
	return 0;
}