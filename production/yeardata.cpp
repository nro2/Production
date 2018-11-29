

#include "yeardata.h"
#include <algorithm>
#include <iomanip>
using namespace std;


YearData::YearData()
{
	resource;
	amount = 0;
	month = 0;
	year = 0;
}

YearData::YearData(int yr, int mnth, string rsc, int amt)
{
	year = yr;
	month = mnth;
	resource = rsc;
	amount = amt;
}


YearData::~YearData()
{
}

void YearData::setMonth(int month, string resource, int amount)
{
	if(find(types.begin(), types.end(), resource) == types.end())
	{
		types.push_back(resource);
		sort(types.begin(), types.end());
		int init = 0;
		for(int i = 0; i < 12; i++)
		{
				
			months[i].add(resource, init);
		}
	}	
	months[month-1].add(resource, amount);
}

void YearData::printMonths()
{
	
	for(int i = 0; i < types.size(); i++)
	{
		int total = 0;
		cout << left << setw(11) << types[i];
		for(int j = 0; j < 12; j++)
		{
			cout << "  ";
			months[j].printResources(types[i]);
			total += months[j].getResources(types[i]);
			
				
		}
		cout << "  " << right << setw(6) << total;
		cout << endl;
	}
} 

void YearData::printRscTot(string rsc)
{
	
	int total = 0;
	for(int i = 0; i < types.size(); i++)
	{
		if(types[i] == rsc)
		{
			for(int j = 0; j < 12; j++)
			{
				total += months[j].getResources(types[i]);							
			}
		}
	}
	cout << right << setw(11) << total;
}

int YearData::printTotal(string rsc)
{
	int total = 0;
	for(int i = 0; i < types.size(); i++)
	{
		if(types[i] == rsc)
		{
			for(int j = 0; j < 12; j++)
			{
				total += months[j].getResources(types[i]);
			}
		}
	}
	return total;
}

void YearData::setYear(int yr)
{
	year = yr;
}

int YearData::getYear()
{
	return year;
}


