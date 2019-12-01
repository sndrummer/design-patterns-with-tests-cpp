#include "pch.h"
#include <decorator/BasicTroll.h>
#include "gtest/gtest.h"


// The fixture for testing class Foo.
class TrollTests : public ::testing::Test
{

protected:

	ITroll* mpTroll = nullptr;
	
	// You can remove any or all of the following functions if their bodies would
	// be empty.
	// You can do set-up work for each test here.
	TrollTests() = default;

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:

	void SetUp() override
	{
		mpTroll = new BasicTroll("Sam");
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	void TearDown() override
	{
		delete mpTroll;
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

};


/*
 * @Test test that getName() works correctly
 */
TEST_F(TrollTests, testGetName)
{
	EXPECT_EQ(mpTroll->getName(), "Sam");
}

