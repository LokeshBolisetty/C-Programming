#include<stdio.h>
void main()
{
	//int a[]={17,28,26,25,11,16,12,24,29,6};
    int a[]={14,24,27,2,29,21,3,17,9,23};
	int A=10;
	int right=A-1;
	int left=0;
	int temp;
	while(left<right)
	{
		while(a[left]<=a[0]&&left<right)
		{
			left++;
		}
		while(a[right]>a[0]&&left<right)
		{
			right--;
		}
		if(left!=right)
		{
			a[left]=a[left]+a[right];
			a[right]=a[left]-a[right];
			a[left]=a[left]-a[right];
		//temp=a[left]; a[left]=a[right]; a[right]=temp;
		}
	}
	int p=0;
	while(p<A)
	{
		printf("%d,",a[p]);
		p++;
	}

}
