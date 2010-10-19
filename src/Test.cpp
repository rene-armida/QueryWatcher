#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/TestCase.h>
#include <cppunit/TestAssert.h>
#include <cppunit/TestCaller.h>

using namespace CppUnit;

class BogusTest : public TestCase
{
public:
	void testEntry() 
	{
		CPPUNIT_ASSERT(1);
	}

	static Test* suite() 
	{
		TestSuite* suite = new TestSuite("BogusTest");
		suite->addTest( new TestCaller<BogusTest>(
			"testHello",
			&BogusTest::testEntry));
		return suite;
	}
};


int main()
{
	TextUi::TestRunner runner;
	runner.addTest(BogusTest::suite());
	bool result = runner.run("", false);
	
	return result ? 0 : 1;
}
