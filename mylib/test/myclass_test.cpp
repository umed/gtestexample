#include <stdio.h>
#include <gtest/gtest.h>
#include <myclass.h>

TEST(MyClassTest, toString_test)
{
	MyClass myClass(4);
	EXPECT_STREQ(myClass.toString().c_str(), "4");
}


GTEST_API_ int main(int argc, char **argv) {
	std::cout << "Running main() from " << __FILE__ << std::endl;
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}