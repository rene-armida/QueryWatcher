#include "Settings.h"
#include "TestSettings.h"

#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>
#include <cppunit/extensions/TypeInfoHelper.h> // required for CPPUNIT_ASSERT_THROW

#include <stdexcept>
using namespace std;

void TestSettings::testEmptyQueries() 
{
	Settings settings;
	// empty Settings object should not have any queries
	CPPUNIT_ASSERT_EQUAL(0, settings.countQueries());

	// trying to get a query should cause an exception
	CPPUNIT_ASSERT_THROW(settings.getQuery(0), invalid_argument);
}

TestSuite* TestSettings::suite() 
{
	TestSuite* suite = new TestSuite("TestSettings");
	suite->addTest( new TestCaller<TestSettings>(
		"testEmptyQueries",
		&TestSettings::testEmptyQueries));
	return suite;
}
