#include <string>

using namespace std;

#include "clock.h"

class TravelClock : public Clock {
public:
	/**
	Construts a clock from a different time zone
	@param mil true for military time
	@param loc location of the clock
	@param diff the difference in time from this location
	*/
	TravelClock(bool mil, string loc, int diff);
	virtual int get_hours() const;
	virtual string get_location() const;
private:
	string location;
	int time_difference;
};
