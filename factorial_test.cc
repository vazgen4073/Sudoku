#include "fact.h"
#include "gtest/gtest.h"

namespace {

// Tests factorial of 0.
TEST(FactorialTest, Zero)
{
    EXPECT_EQ(1, fact(0));
}

TEST(FactorialTest, Negative)
{

    bool is_negative = false;
    try {
        fact(-3);
        fact(-65);
        fact(-234);
        fact(-35);
        fact(-23);
    } catch (const std::runtime_error& rt) {
        is_negative = true;
    }
    EXPECT_TRUE(is_negative);
}

TEST(FactorialTest, Overflow)
{

    bool is_overflow = false;
    try {
        fact(40);
        fact(365);
        fact(66);
        fact(53);
        fact(45);
        fact(73);
    } catch (const std::runtime_error& rt) {
        is_overflow = true;
    }
    EXPECT_TRUE(is_overflow);
}

TEST(FactorialTest, Positive)
{
    EXPECT_EQ(1, fact(1));
    EXPECT_EQ(2, fact(2));
    EXPECT_EQ(6, fact(3));
    EXPECT_EQ(39916800, fact(11));
    EXPECT_EQ(1932053504, fact(13));
    EXPECT_EQ(40320, fact(8));
}
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

