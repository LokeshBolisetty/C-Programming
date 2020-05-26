#include<stdio.h>
void main()
{
	int T,N,d,a[100];
	scanf("%d",&T);
	for(int p=1;p<=T;p++)
	{
		scanf("%d",&N);
		for(int i=1;i<=N;i++)
		{
			//printf("Enter people in stalls: ");
			for(i=0;i<=N-1;i++)
			{
				scanf("%d",&a[i]);
			}
			int k;
			while(1)
			{
				k=a[i];
				d=i;
				for(i=0;i<=N-1;i++)
					a[i]--;
				if(k==0)
					break;
				i++;
				if (i==N)
					i=0;
			}
			printf("%d %d",k,d);
		}
	}
}