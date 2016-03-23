#include "Time.h"


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