#include "reporter.h"


using namespace std;


reporter::reporter()
{
}

reporter::reporter(productiondb dab)
{
	db = dab;
}

reporter::~reporter()
{
}

void reporter::printFullReport(int year)
{
	cout << "*******" << year << "*******";
	cout << endl;
	db.printStations(year);
}

void reporter::printStationReport(int year)
{
	cout << "*******" << year << "*******";
	cout << endl;
	db.printStationTotal(year);
}
