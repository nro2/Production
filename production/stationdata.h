

#include <iostream>
#include <vector>
#include <string>
#include "yeardata.h"

using namespace std;

#ifndef STATIONDATA_H
#define STATIONDATA_H

class StationData
{

	private:

		vector <YearData> years;
		string resource;
		int amount;
		int month;
		int year;

	public:

		StationData();
		~StationData();

		void addYear(int year, int month, string resource, int amount);
		bool searchVector(int year);
		
		void printYear(int year);
		void printData();
		void printSingleEntry(int year, string rsc);
		int printResourceTotal(int year, string rsc);

};

#endif


