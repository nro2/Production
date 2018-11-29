//Nick Robinson

#include <map>
#include <iostream>
#include <string>

using namespace std;

#ifndef RESOURCECOUNT_H
#define RESOURCECOUNT_H

class ResourceCount
{

	private:

		map<string,int> resources;
		string resource;
		int amount;

	public:

		ResourceCount();
		~ResourceCount();
	
		void add(string resource, int amount);
		void printResources(string key);
		int getResources(string key);
};

#endif


