#include "pch.h"
#include "../ConsoleApplication7/ConsoleApplication7.cpp"
#include <vector>
vector<int> vec1{ 4, 4, 4, 4, 4, 4 };
vector<int> vec2{ 5, 5, 5, 5, 5, 5 };

TEST(TestCaseName, TestName) {
	EXPECT_EQ(func(vec1, 1), vec2);
	EXPECT_TRUE(true);
}