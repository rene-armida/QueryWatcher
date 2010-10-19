#ifndef SETTINGS_H
#define SETTINGS_H

#include <Archivable.h>


/**
 * A class to encapsulate the app's configuration and queries.
 * Named "Settings" to avoid confusion with the build process's 
 * "configure" script
 */
class Settings : public BArchivable
{
public:
	int countQueries() const;
	const char* getQuery(int idx) const;
};

#endif
