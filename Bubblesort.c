#include<stdio.h>
void main()
{
    int A[]={3,2,1,4,1};
    int a=5,count;
    do
    {
        count=0;
        int right=a-1;
        while(right>0)
        {
            if(A[right]<A[right-1])
            {
                int temp=A[right];
                A[right]=A[right-1];
                A[right-1]=temp;
                count++;
            }
            right=right-1;
        }
        printf("Count = %d\n",count);
        for(int i=0;i<a;i++)
    {
        printf("%d,",A[i]);
    }
    printf("\n");
    }while(count>0);


}
