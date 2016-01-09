
#include<stdio.h>

int correct_date_calc(int day, int month, int year)
{
const int ref_year=2012;
int lp_yr_flg=0;

	if(year<=2012)
	{
		if(((ref_year - year)%4) == 0)
		{
			lp_yr_flg=1;
		}
	}

	else if(year>2012)
	{
		if(((year - ref_year)%4) == 0)
		{
			lp_yr_flg=1;
		}
	}

	if(month>12 || month<1)
	{
		return 0;
	}

	if((lp_yr_flg==1) && (month==2) && (day>29))
	{
		return 0;
	}

	else if((lp_yr_flg==0) && (month==2) && (day>28))
	{
		return 0;
	}

	else if(((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) && (day>31 || day<1))
	{
		return 0;
	}

	else if(((month == 4) || (month == 6) || (month == 9) || (month ==11)) && (day>30 || day<1))
	{
		return 0;
	}

	return 1;
}

int leap_year_calc(int year_lp)
{
const int ref_year=2012;
int lp_yr_flg=0;

	if(year_lp<=2012)
	{
		if(((ref_year - year_lp)%4) == 0)
		{
		 lp_yr_flg=1;
		 return lp_yr_flg;
		}
	}

	else if(year_lp>2012)
	{
		if(((year_lp - ref_year)%4) == 0)
		{
		 lp_yr_flg=1;
		 return lp_yr_flg;
		}
	}

	return 0;
}


int no_of_days(int month, int year)
{
int day=0;
int leap_yr = 0;

	leap_yr = leap_year_calc(year);

	if((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
	{
		day=31;
		return day;
	}

	else if((month == 4) || (month == 6) || (month == 9) || (month ==11))
	{
		day=30;
		return day;
	}

	else if((month == 2) && (leap_yr == 1))
	{
		day=29;
		return day;
	}

	else if((month == 2) && (leap_yr == 0))
	{
		day=28;
		return day;
	} return 0;
}

/*This function caculates the day when the date given by user is before the refernce date*/
int bef_ref_date(int day_bef,int month_bef,int year_bef)
{

int day_dec,year_dec,month_dec=12,day=1;

	for(year_dec=2012; year_dec>=year_bef; year_dec--)
	{
		for(month_dec=12; month_dec>=1; month_dec--)
		{
			for(day_dec=no_of_days(month_dec, year_dec); day_dec>=1; day_dec--)
			{
				if(year_dec==year_bef && month_dec==month_bef && day_dec==day_bef)
				{
					return day;
				}

				day--;

				if(day==0)
				{
				day=7;
				}
			}
		}
	} return 0;
}

/*This Function calculates the day when the date given by user is after the reference date*/
int aft_ref_date(int day_aft,int month_aft,int year_aft)
{

int day_inc, year_inc, month_inc=1, day=1, month_day_lim;

	for(year_inc=2012; year_inc<=year_aft; year_inc++)
	{
		for(month_inc=1; month_inc<=12; month_inc++)
		{
			month_day_lim = no_of_days(month_inc, year_inc);

			for(day_inc=1; day_inc<=month_day_lim; day_inc++)
			{
				if(year_inc==year_aft && month_inc==month_aft && day_inc==day_aft)
				{
					return day;
				}

				day++;

				if(day==8)
				{
				day=1;
				}
			}
		}
	}    return 0;
}


void main()
{
int day, month, year, day_date, crct_date_flg=0;
const int ref_year = 2012;

	printf("\nPlease enter the input as per the format\n\n ");

	printf("\nEnter the Date in DD format: ");
	scanf("%d",&day);

	printf("\nEnter the Month in MM format: ");
	scanf("%d",&month);

	printf("\nEnter the Year in YYYY format: ");
	scanf("%d",&year);

	crct_date_flg = correct_date_calc(day, month, year);

	if(crct_date_flg == 0)
	{
	   printf("Date Entered is an Invalid Date!!");
	}



if(crct_date_flg==1)
{
	if(year <= ref_year)
	{
		day_date = bef_ref_date(day, month, year);

		switch (day_date)
		{
			case 1:
				printf("\nThe day was Monday");
				break;
			case 2:
				printf("\nThe day was Tuesday");
				break;
			case 3:
				printf("\nThe day was Wednesday");
				break;
			case 4:
				printf("\nThe day was Thursday");
				break;
			case 5:
				printf("\nThe day was Friday");
				break;
			case 6:
				printf("\nThe day was Saturday");
				break;
			case 7:
				printf("\nThe day was Sunday");
				break;
		}
	}

	else if (year > ref_year)
	{
		day_date = aft_ref_date(day, month, year);

		switch (day_date)
		{
			case 1:
				printf("\nThe day is Sunday");
				break;
			case 2:
				printf("\nThe day is Monday");
				break;
			case 3:
				printf("\nThe day is Tuesday");
				break;
			case 4:
				printf("\nThe day is Wednesday");
				break;
			case 5:
				printf("\nThe day is Thursday");
				break;
			case 6:
				printf("\nThe day is Friday");
				break;
			case 7:
				printf("\nThe day is Saturday");
				break;
		}
	}
}
        return 0;
}