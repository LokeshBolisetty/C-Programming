//Palindrome
#include<stdio.h>
void main()
	{
		int n,digit=0;
		printf("Enter a number to know if it is Palindrome or not: ");
		scanf("%d",&n);
		while(n!=0)
		{
			n=n/10;
			digit++;
		}
		printf("There are %d digits in the eneterd number",digit);
		int k[n];

	}