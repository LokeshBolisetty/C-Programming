#include<stdio.h>
int a=1;
void main()
	/*{
		//printf("The value of the varible is: %d\n",a);
		int b,c;
		b=a++;c=++a;
		printf("b=%d",b);
		printf("c=%d",c);
	}*/
	/*{
		int c;
		{		/*do

			c=a++;
			printf("%d\t",c);

		}while(c<=100);*/
		/*while(a<=100)
		{
			
			printf("%d\t",a);
			a++;
		}
	}*/
	{
		for(int i=1;i<6;i++)
		{
			for(int j=1;j<=i;j++)
				{
					printf("0");
				}
				printf("\n");
		}
	}
	/*{	
		int n;
		printf("Which table do you want to print: ");
		scanf("%d",&n);
		for(int i=1;i<=10;i++)
		{
			printf("%d x %d = %d\n",n,i,n*i);
		}
	}*/