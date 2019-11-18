/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*
	FUNCTIONS WITHIN RANDO CLASS:

	bool isDivisibleBy(int,int);

	bool isPalindrome(string);

	unsigned int mostPopularDigit(unsigned int);
*/

class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(RandoTest, sanityCheck)
{
	Rando rando;
	ASSERT_TRUE( true );
}

TEST(RandoTest, thisWillFail)
{
	ASSERT_TRUE( false );
}

TEST(RandoTest, isDivisTrue) {
	Rando rando;
	ASSERT_TRUE(rando.isDivisibleBy(4, 2));
}

TEST(RandoTest, isDivisFalse) {
	Rando rando;
	ASSERT_FALSE(rando.isDivisibleBy(4, 3));
}

TEST(RandoTest, isPalinLong) {
	Rando rando;
	ASSERT_TRUE(rando.isPalindrome("gohangasalmiimalasagnahog"));
}

TEST(RandoTest, isPalinShort) {
	Rando rando;
	ASSERT_TRUE(rando.isPalindrome("ufotofu"));
}

TEST(RandoTest, isNotPalinCaps) {
	Rando rando;
	ASSERT_FALSE(rando.isPalindrome("Racecar"));
}

TEST(RandoTest, mostPopZero) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(0), 0);
}

TEST(RandoTest, mostPop331311) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(331311), -1);
}

TEST(RandoTest, mostPopEveryDigit) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(1234567890), -1);
}

TEST(RandoTest, mostPop31311) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(31311), 1);
}

TEST(RandoTest, mostPopRepeatOne) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(222), 2);
}

TEST(RandoTest, mostPopTwoDigits) {
	Rando rando;
	ASSERT_EQ(rando.mostPopularDigit(64), -1);
}
