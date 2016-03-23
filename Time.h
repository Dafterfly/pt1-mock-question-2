#pragma once

class Time
{ 
private:
	int hours, minutes;
public:
	Time();
	Time(int hoursIn, int minutesIn);
	void get(int &hrVar, int &minVar);
	void set(int hoursIn, int minutesIn);
	~Time();
};

