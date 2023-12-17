#include "JDate.h"
#include <stdio.h>

void JDate::SetDate(int _Year, int _Month, int _Day)
{
	Year = _Year;
	Month = _Month;
	Day = _Day;
}

void JDate::AddDay(int inc)
{
	Day += inc;

	UpdateDay();
}

void JDate::AddMonth(int inc)
{
	Month += inc;

	UpdateMonth();
}

void JDate::AddYear(int inc)
{
	Year += inc;

	UpdateYear();
}

void JDate::ShowData()
{
	printf("%04d / %02d / %02d \n", Year, Month, Day);
}

void JDate::Execute()
{
	SetDate(2023, 2, 13);

	AddDay(46);
	ShowData();

	AddMonth(11);
	ShowData();
}

void JDate::UpdateDay()
{
	if (Day > EndDay())
	{
		Day -= EndDay();
		Month += 1;
		UpdateDay();
	}
}

void JDate::UpdateMonth()
{
	if (Month > 12)
	{
		Month -= 12;
		AddYear(1);
		UpdateMonth();
	}

	if (Day > EndDay())
	{
		Day = EndDay();
	}
}

void JDate::UpdateYear()
{
	return;
}

int JDate::EndDay()
{
	//4,5,9,11 30
	//2 leap 29, else 28
	//else 31

	switch (Month)
	{
		case 1:
		case 3:
		case 6:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 5:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			return IsLeapMonth() ? 29 : 28;
			break;
	}

	return 31;
}
