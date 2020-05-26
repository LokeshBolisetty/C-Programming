#include <stdio.h>

void main() {
    int p,q,i;
    printf("enter the sizes of arrays : ");
    scanf("%d %d",&p,&q);
    if (p>=q){
        int A[p], B[p];
        int C[p+1];
        for(int z=0;z<p+1;z++)
        {
            C[z]=0;
        }
        printf("enter the elements of A : ");
        for (i=0;i<p;i++){
            scanf("%d",&A[i]);
        }
        printf("enter the elements of B : ");
        for (i=p-q;i<p;i++){
            scanf("%d",&B[i]);
        }for (i=0;i<p-q;i++){
            B[i]=0;
        }
        for(i=p-1;i>=0;i--){
            if (A[i]+B[i]<10){
                C[i+1]=A[i]+B[i];
            }else{
                C[i+1]=A[i]+B[i]-10;
                A[i-1]++;
            }
            }for(i=0;i<p+1;i++){
                printf("%d",C[i]);
            }
        }
}
