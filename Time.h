#pragma once
#include <iostream>

using namespace std;

class Time
{ 
private:
	int hours, minutes;
public:
	Time();
	Time(int hoursIn, int minutesIn);
	void get(int &hrVar, int &minVar);
	void set(int hoursIn, int minutesIn);
	friend ostream& operator<<(ostream& output, Time &myTime);
	Time operator++(int);
	~Time();
};

