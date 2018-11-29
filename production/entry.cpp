
#include "entry.h"

using namespace std;

entry::entry()
{
	year = 0;
	month = 0;
	day = 0;
	station;
	resource;
	amount = 0;
}

entry::~entry()
{
}

entry::entry(int yr, int mnth, int dy, string stat, string rsc, int amt)
{
	year = yr;
	month = mnth;
	day = dy;
	station = stat;
	resource = rsc;
	amount = amt;
}

int entry::getYear()
{
	return year;
}

int entry::getMonth()
{
	return month;
}

int entry::getDay()
{
	return day;
}

string entry::getStation()
{
	return station;
}

string entry::getResource()
{
	return resource;
}

int entry::getAmount()
{
	return amount;
}
