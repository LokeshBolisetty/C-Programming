#include<stdio.h>
int main()
    {
		int date,month,year;
		printf("Enter your date of birth(MM DD YYYY): ");
		scanf("%2d %2d %4d",&date,&month,&year);
		year=2020-year;
		if (month>2)
		{
		year=year-1;
		month=14-month;
		if (date<12)
		{date=12-date;
		}
		}	
		else
		{
		month=14-month;
		if (date<12)
		{date=12-date;
		 	}
		}
		printf("Your age is %d days %d months %d years",date,month,year);
		return 0;
    }
 

