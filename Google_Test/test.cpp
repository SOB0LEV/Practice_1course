#include "pch.h"
#include "../Practice_1course/header.h"
#include "../Practice_1course/functions.c"

TEST(Test1, Belong1) {
	EXPECT_EQ(show_result(90, 70, 10), 1);
	EXPECT_TRUE(true);
}
TEST(Test2, NotBelong1) {
	EXPECT_EQ(show_result(43, -29, -17), 0);
	EXPECT_TRUE(true);
}
TEST(Test3, Belong2) {
	EXPECT_NE(show_result(-86, -35, -21), 0);
	EXPECT_TRUE(true);
}
TEST(Test4, NotBelong2) {
	EXPECT_NE(show_result(12, -3, -8), 1);
	EXPECT_TRUE(true);
}
TEST(Test5, ApexOrSide1) {
	EXPECT_EQ(show_result(-5, 0, -13), 2);
	EXPECT_TRUE(true);
}
TEST(Test6, ApexOrSide2) {
	EXPECT_NE(show_result(0, -29, 17), 1);
	EXPECT_TRUE(true);
}