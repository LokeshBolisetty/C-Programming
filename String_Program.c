#include<stdio.h>
char str[]={'a','a','a','b','c','d','a','a','a','a','a'};
int Vowelbool(int a)
{
    if(a==97||a==65||a==101||a==69||a==73||a==105||a==111||a==75||a==117||a==85)
    {
        return 1;
    }
    else return 0;
}
int Vowelfind(int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(Vowelbool(str[i])==1)
        {
            return i;
        }
    }
    return -1;

}
void main()
{
    int n=11;
    while(Vowelfind(n)!= -1)
    {
        int i=Vowelfind(n)-1;
        do
        {
           str[i]++;
           i--;
        }while(Vowelbool(str[i])!=1||i!=0);
        do
        {
            str[i]++;
            i++;
        }while(Vowelbool(str[i])!=1||i!=n-1);
    }
    printf("%s",str);
    //printf("%d",str[0]+1);
    //printf("%c",str[0]+1);
}
