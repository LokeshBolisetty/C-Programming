#include <stdio.h>
#define PI 3.1415926

int main() {
char shape,calc;
float r,b,h,s1,s2,s3,s;
printf("Enter the shape you want: ");
scanf("%c",&shape);
switch(shape)
{
    case 'C':
    {
        printf("What do you want to calculate: ");
        scanf(" %c",&calc);
        if (calc=='P')
        {
            printf("Enter the radius of the circle: ");
            scanf(" %f",&r);
            printf("The perimeter of the circle is %.4f",PI*2*r);      
        }
        else if(calc=='A')
        {
            printf("Enter the radius of the circle: ");
            scanf(" %f",&r);
            printf("The area of the circle is %.4f",PI*r*r);
        }
    }
}
    return 0;
}