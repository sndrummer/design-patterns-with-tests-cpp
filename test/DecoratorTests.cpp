#include "pch.h"
#include <decorator/BasicTroll.h>
#include <decorator/ClubbedTroll.h>
#include "gtest/gtest.h"
#include <memory>


// The fixture for testing the decorator design pattern using the ITroll interface and its derived classes.
class DecoratorTests : public ::testing::Test
{
protected:

	std::unique_ptr<BasicTroll> mpTroll = nullptr;
	

	//ITroll* mpTroll = nullptr;
	
	// You can remove any or all of the following functions if their bodies would
	// be empty.
	// You can do set-up work for each test here.
	DecoratorTests() = default;

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:

	void SetUp() override
	{
		mpTroll = std::make_unique<BasicTroll>("Sam");
		// Code here will be called immediately after the constructor (right
		// before each test).
	}

	void TearDown() override
	{
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

};

/*
 * @Test test that getName() works correctly
 */
TEST_F(DecoratorTests, testGetName)
{
	EXPECT_EQ(mpTroll->getName(), "Sam");
}

/*
 * @Test clubbed troll decoration
 * Capture stdout to test that the clubbed troll adds functionality 
 */
TEST_F(DecoratorTests, testAttackWithClub)
{
	ClubbedTroll clubbedTroll(mpTroll.get());

	testing::internal::CaptureStdout();
	clubbedTroll.attack();
	const auto output = testing::internal::GetCapturedStdout();
	EXPECT_EQ("The Troll attacks with a club", output);
	
}

/*
 * @Test clubbed troll decoration
 * Capture stdout to test it
 */
TEST_F(DecoratorTests, testGetNameClubbed)
{
	ClubbedTroll clubbedTroll(mpTroll.get());
	
	EXPECT_EQ(clubbedTroll.getName(), "Sam, the clubbed troll");

}