#ifndef TESTSETTINGS_H
#define TESTSETTINGS_H

#include <cppunit/TestCase.h>
#include <cppunit/TestSuite.h>

using namespace CppUnit;

class TestSettings : public TestCase
{
public:

	void testEmptyQueries();
//	void testAddQueries();
//	void testRemoveQueries();

	static TestSuite* suite();

};

#endif
