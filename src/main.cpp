#include "App.h"

int main()
{
	#ifdef DEBUG
	SET_DEBUG_ENABLED(true);
	#endif
	
	App app;
	app.Run();
	
	return 0;
}
