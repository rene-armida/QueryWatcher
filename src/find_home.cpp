#include <Path.h>
#include <iostream>
using namespace std;

int main() {
	BPath plainPath;
	cout << "Plain path: " << plainPath.Path() << endl;
	
	BPath invalidPath("invalid");
	cout << "Invalid path: " << invalidPath.Path() << endl;
	
	return 0;
}
