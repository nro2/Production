//Nick Robinson

#include "resourcecount.h"
#include <iomanip>

using namespace std;



ResourceCount::ResourceCount()
{
	resource;
	amount = 0;
}

ResourceCount::~ResourceCount()
{


}

void ResourceCount::add(string rsc, int amt)
{
	resources[rsc] += amt;
	return;
}

void ResourceCount::printResources(string key)
{
	cout << right << setw(6) << resources.find(key)->second;
	return;
}

int ResourceCount::getResources(string key)
{
	return resources[key];
}







