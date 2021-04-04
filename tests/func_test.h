#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

/* using namespace testing; */
extern "C" {
#include "func.h"
}

TEST(Func, no_sol_positive) {
    solution res = Func(1, 1, 10);
    EXPECT_EQ(0, res.count);
}
TEST(Func, one_sol_positive) {
    solution res = Func(4, 4, 1);
    EXPECT_EQ(1, res.count);
    EXPECT_EQ(-0.5, res.x1);
}

TEST(Func, two_sol_positive) {
    solution res = Func(2, 5, 2);
    EXPECT_EQ(2, res.count);
    EXPECT_EQ(-2, res.x1);
    EXPECT_EQ(-0.5, res.x2);
}
TEST(Func, test4_negative){
    solution res = Func(0, 1, 1);
    EXPECT_EQ(1, res.count);
    EXPECT_EQ(-1, res.x1);


}
TEST(Func, test5_negative){
    solution res = Func(1, 0, 1);
    EXPECT_EQ(0, res.count);

}
TEST(Func, test6_negative){
    solution res = Func(0, 0, 0);
    EXPECT_EQ(0, res.count);

}
TEST(Func, test7_negative){
    solution res = Func(1, 1, 0);
    EXPECT_EQ(2, res.count);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(0, res.x2);

}
TEST(Func, test8_negative){
    solution res = Func(1, 0, 0);
    EXPECT_EQ(1, res.count);
    EXPECT_EQ(0, res.x1);
}


