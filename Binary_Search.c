#include<stdio.h>
void main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/4;
	printf("%d",n);
	int p, left = 0,right=n-1,mid=n/2;
	printf("Enter the element you want to search: \n");
	scanf("%d",&p);
	while(right-left>1)
	{
		if(p<=a[mid]&&p>=a[left])
		{
			right=mid;
		}
		else
		{
			left = mid;
		}
		mid=(left+right)/2;
	}
	if(a[left]==p||a[right]==p)
		{
			printf("YES");
		}
	else
		{
			printf("NO");
		}
}
/*
a=1,2,3
left=0,right=2,mid=1
*/