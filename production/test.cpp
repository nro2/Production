


#include <iostream>
#include <string>
//#include "resourcecount.h"
//#include "yeardata.h"
//#include "stationdata.h"
#include "productiondb.h"
#include "entry.h"
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	productiondb db;
	
	string station = "metallica";
	string temprsc = "water";
	int mnt1 = 12;
	int amt = 20;
	int year = 2044;
	int day = 0;
	
/*	char* datafile = argv[1];
	ifstream infile(datafile);
	int year;
	int month;
	int day;
	string station;
	string resource;
	int amount;

	while (infile.eof())
	{
		cout << "adding files " << endl;
		infile >> year;
		infile >> month;
		infile >> day;
		infile >> station;
		infile >> resource;
		infile >> amount;
	
		if (!infile.eof())
		{
			entry oneEntry(year, month, day, station, resource, amount);
			db.addData(oneEntry);
		}
	}
	*/

	entry entry1(year, mnt1, day, station, temprsc, amt);
	entry entry2(year, mnt1, day, station, temprsc, amt);
	entry entry3(year, mnt1, day, station, temprsc, amt);
	entry entry4(year, mnt1, day, station, temprsc, amt);
	entry entry5(year, mnt1, day, station, temprsc, amt);
	entry entry6(year, mnt1, day, station, temprsc, amt);
	entry entry7(year, mnt1, day, station, temprsc, amt);
	entry entry8(year, mnt1, day, station, temprsc, amt);








	string station2 = "megadeth";
	int mnt3 = 6;
	int amt3 = 15;
	int year3 = 2045;
	
	
	string station3 = "beyonce";

	string temprsc2 = "chlorine";
	int mnt2 = 8;
	int amt2 = 40;
	int year2 = 2045;
	cout << "Adding water" << endl;
	db.addData(entry1);
	db.addData(entry2);
	db.addData(entry3);
	db.addData(entry4);
	db.addData(entry5);
	db.addData(entry6);
	db.addData(entry7);
	db.addData(entry8);
	


	cout << "Water added" << endl;
//	db.addStation(station2, temprsc2, amt2, year2, mnt2, day);

	string temprsc3 = "iron";

//	db.addStation(station3, temprsc3, amt2, year2, mnt2, day);




	db.printStations();
	
	
//	cout << endl << "adding 20 more water to metallica" << endl;


//	db.addStation(station, temprsc, amt3, year3, mnt3, day);
//	db.printStations();


//	sd.printYear(2045);


	return 0;
}
