#indef CLOCK_H
#define CLOCK_H

#include <iostream>

using namespace std;

class Clock {
public:
	/**
	Constructs a clock that can tell the local time
	@param use_military true if local
	*/
	Clock(bool use_military);

	/**
	Gets the hours of the clock
	@return hours in military or am/pm format
	*/
	int get_hours() const;

	/**
	Gets the minutes of the clock
	@return minutes in military or am/pm format
	*/
	int get_minutes() const;

	/**
	Checks whether this clock is using military format
	@return true if military
	*/
	bool is_military() const;

	/**
	Gets the location of this clock
	@return the location
	*/
	string get_location() const;
private:
	bool military;
};

#endif
