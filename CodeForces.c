#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char word[n][100];
    for(int i=0;i<n;i++)
    {
        scanf("%s",word[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(strlen(word[i])<10)
            printf("%s",word[i]);
        else
            printf("%c%d%c",word[i][0],strlen(word[i])-2,word[i][strlen(word[i])-1]);
        if(i<n-1)
            printf("\n");
    }
return 0;
}

