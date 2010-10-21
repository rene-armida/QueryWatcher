#ifndef SETTINGS_H
#define SETTINGS_H

#include <Archivable.h>
#include <List.h>


/**
 * A class to encapsulate the app's configuration and queries.
 * Named "Settings" to avoid confusion with the build process's 
 * "configure" script
 */
class Settings : public BArchivable
{
public:
	Settings();
	~Settings();
	int32 countQueries() const;
	const char* getQuery(int idx) const;
	
private:
	BList fQueries;
};

#endif
