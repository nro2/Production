#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "resourcecount.h"


using namespace std;

#ifndef YEARDATA_H
#define YEARDATA_H

class YearData
{

	private:

		ResourceCount months[12];
		vector <string> types;

		string resource;
		int amount;
		int month;
		int year;

	public:

		YearData();
		YearData(int yr, int mnth, string rsc, int amt);
		~YearData();

		void setMonth(int month, string resource, int amount);
		void printMonths();
		void setYear(int yr);
		int getYear();
		void printRscTot(string rsc);
		int printTotal(string rsc);
};

#endif
