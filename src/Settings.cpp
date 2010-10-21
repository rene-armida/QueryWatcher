#include "Settings.h"

#include <List.h>
#include <String.h>

#include <stdexcept>
#include <iostream>


Settings::Settings() 
{
}

Settings::~Settings()
{
	while(!fQueries.IsEmpty()) {
		// this generates a warning because about an ambiguous overload; 
		// the compiler thinks we could mean NULL
		delete fQueries.RemoveItem((long)0); 
	}
}

int32 Settings::countQueries() const
{
	return fQueries.CountItems();
}
	
const char* Settings::getQuery(int idx) const
{
	if(idx >= fQueries.CountItems() || idx < 0) {
		// index out of range
		throw std::invalid_argument("query index out of range");
	}
	
	return ((BString*)fQueries.ItemAt(idx))->String();
}
