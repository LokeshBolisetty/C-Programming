void main()
{
	int A[] = {17,28,26,25,11,16,12,24,29,6};
	int a = 10, left=0, right=9, temp;

	while(left < right)
	{
		while(A[left]<=A[0] && left<right)
		{
			left=left+1;
		}

		while(A[right]>A[0] && left<right)
		{
			right=right-1;
		}
			//swap
			temp=A[left]; A[left]=A[right]; A[right]=temp;
	}
	int p=0;
	while(p<a)
	{
		printf("%d",A[p]);
		p++;
	}
}
