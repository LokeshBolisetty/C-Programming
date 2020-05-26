/*#include<stdio.h>
void main()

	{
		int n,count,y=0;
		printf("Enter the number you want to check:");
		scanf("%d",&n);
		for(int j=2;j<=n;j++)
		{	count=0;
			for(int i=1;i<=j;i++)
			{	
				if(j%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				y++;
			}
		}
		printf("There are %d prime numbers in 1 to %d",y,n);
	}
*/
#include<stdio.h>

void part1() 
{
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           printf("%d",n);
           /*for(int k=1;k<=j;k++)
           {
               printf("\t");
           }*/
       }
   }  
}