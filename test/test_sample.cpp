#include <gtest/gtest.h>

#include <ros/ros.h>

TEST(SampleTest, TestCase1)
{
    EXPECT_EQ(true, true);
}



int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  // ros::init(argc, argv, "test_sample");
  // ros::NodeHandle nh;
  return RUN_ALL_TESTS();
}
