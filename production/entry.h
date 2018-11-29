
#include <iostream>
#include <string>

using namespace std;

#ifndef ENTRY_H
#define ENTRY_H

class entry
{

	private:

		int year;
		int month;
		int day;
		string station;
		string resource;
		int amount;

	public:
		entry();
		~entry();

		entry(int yr, int mnth, int dy, string stat, string rsc, int amt);

		int getYear();
		int getMonth();
		int getDay();
		string getStation();
		string getResource();
		int getAmount();

};

#endif

