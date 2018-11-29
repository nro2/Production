
#include "productiondb.h"
#include <iostream>
#include <string>

using namespace std;

#ifndef REPORTER_H
#define REPORTER_H

class reporter
{

	private:
		productiondb db;

	public:

		reporter();
		reporter(productiondb dab);
		~reporter();

		void printFullReport(int year);
		void printStationReport(int year);	
};

#endif


