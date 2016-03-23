#include "Time.h"
#include <iostream>

using namespace std;


Time::Time()
{
	hours = 0;
	minutes = 0;
}

Time::Time(int hoursIn, int minutesIn)
{
	hours = hoursIn;
	minutes = minutesIn;
}

Time::~Time()
{
}

void Time::get(int &hrVar, int &minVar)
{
	hrVar = hours;
	minVar = minutes;
}

void Time::set(int hoursIn, int minutesIn)
{
	hours = hoursIn;
	minutes = minutesIn;
}

ostream& operator<<(ostream& output, Time &myTime)
{
	if (myTime.hours < 10)
	{
		output << "0" << myTime.hours << ":";
	}

	else
	{
		output << myTime.hours << ":";
	}

	if (myTime.minutes < 10)
	{
		output << "0" << myTime.minutes;
	}

	else
	{
		output << myTime.minutes;
	}

	return output;
}

// Define postfix increment operator.
Time Time::operator++(int)
{
	if (minutes >= 59)
	{
		minutes = 0;
		hours++;
	}
	else
	{
		minutes++;
	}

	return *this;
}