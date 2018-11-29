#include "stationdata.h"

using namespace std;




StationData::StationData()
{
	resource;
	month = 0;
	year = 0;
	amount = 0;
	
}


StationData::~StationData()
{
}




void StationData::addYear(int year, int month, string resource, int amount)
{
	bool found = searchVector(year);
	
	if(found == true)
	{
		for(int i = 0; i < years.size(); i++)
		{
			if(year == years[i].getYear())
			{
				years[i].setMonth(month, resource, amount);
			}
		}
	}
	else
	{
		YearData newYear(year, month, resource, amount);
		years.push_back(newYear);
		for(int i = 0; i < years.size(); i++)
		{
			if(year == years[i].getYear())
			{
				years[i].setMonth(month, resource, amount);
			}
		}
		
	}
}
			
bool StationData::searchVector(int year)
{
	bool found = false;
	while(found == false)
	{
		for(int i = 0; i< years.size(); i++)
		{
			if(year == years[i].getYear())
			{
				found = true;
			}
		}
	return found;
	}
}

void StationData::printYear(int year)
{
	for(int i = 0; i < years.size(); i++)
	{
		if(year == years[i].getYear())
		{
			years[i].printMonths();
		}
	}
}

void StationData::printSingleEntry(int year, string rsc)
{
	for(int i = 0; i < years.size(); i++)
	{
		if(year == years[i].getYear())
		{
			years[i].printRscTot(rsc);
		}
	}
}


void StationData::printData()
{
	for(int i = 0; i < years.size(); i++)
	{
		cout << "Year: " << years[i].getYear() << endl;
		years[i].printMonths();
	}
}

int StationData::printResourceTotal(int year, string resource)
{
	int total = 0;
	for(int i = 0; i < years.size(); i++)
	{
		if(year == years[i].getYear())
		{
			total = years[i].printTotal(resource);
		}
	}
	return total;
	
}
