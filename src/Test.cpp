#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>
#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TestRunner.h>

#include "TestSettings.h"

using namespace CppUnit;

int main()
{
	TextUi::TestRunner runner;
	runner.addTest(TestSettings::suite());
	bool result = runner.run("", false);
	
	return result ? 0 : 1;
}
