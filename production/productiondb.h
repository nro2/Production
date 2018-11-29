
#include <map>
#include <iostream>
#include <string>
#include "stationdata.h"
#include "entry.h"
#include <vector>

using namespace std;

#ifndef PRODUCTIONDB_H
#define PRODUCTIONDB_H

class productiondb
{
	private:

		map<string, StationData> stations;
		vector <string> resourceLog;

		string resource;
		string station;
		int amount;
		int year;
		int month;
		int day;

	public:

		productiondb();
		~productiondb();

		void addData(entry newEntry);
		void printStation(string key);
		void printStations(int year);
		void printStationTotal(int year);
		
};

#endif

