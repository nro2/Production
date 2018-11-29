
#include "productiondb.h"
#include "entry.h"
#include <algorithm>
#include <iomanip>
using namespace std;

productiondb::productiondb()
{
	year = 0;
	month = 0;
	day = 0;
	resource;
	station;
}

productiondb::~productiondb()
{

}

void productiondb::addData(entry newEntry)
{
	if(find(resourceLog.begin(),resourceLog.end(),newEntry.getResource()) == resourceLog.end())
	{
		resourceLog.push_back(newEntry.getResource());
		sort(resourceLog.begin(), resourceLog.end());
	}
	stations[newEntry.getStation()].addYear(newEntry.getYear(),newEntry.getMonth(),newEntry.getResource(),newEntry.getAmount());
	
	return;
}

void productiondb::printStations(int year)
{
	for(auto it = stations.begin(); it != stations.end(); it++)
	{
		cout << endl;
		cout << "Station: " << it->first << endl << endl;
		cout << "		Jan	Feb	Mar	Apr	May	Jun	Jul	Aug	Sep	Oct	Nov	Dec	Tot" << endl;
		it->second.printYear(year);
		cout << endl;
	}
}

void productiondb::printStationTotal(int year)
{
		cout << "           ";	
	for(auto it = stations.begin(); it != stations.end(); it++)
	{
		cout << right << setw(11) << it->first;
	}
	cout << endl;
	for(int i = 0; i < resourceLog.size(); i++)
	{
		cout << left << setw(11) << resourceLog[i];
		for(auto it = stations.begin(); it != stations.end(); it++)
		{
			it->second.printSingleEntry(year, resourceLog[i]);
		}
		cout << endl;
	}
	cout << right << setw(11) <<  "Total";
	for(auto it = stations.begin(); it != stations.end(); it++)
	{
		int total = 0;
		for(int i = 0; i < resourceLog.size(); i++)
		{
			total += it->second.printResourceTotal(year, resourceLog[i]);
		}
		cout << right << setw(11) << total;
	}
	cout << endl << endl;


}
