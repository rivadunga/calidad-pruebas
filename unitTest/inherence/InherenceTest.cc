#include "gtest/gtest.h"
#include <iostream>
#include "Data.h"


using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;

template <class T>
class Fixture : public ::testing::Test
{
public:
  void SetUp(){
    parent = new T;
  }
  void TearDown(){
    delete parent;
  }
    Parent* parent;
};


typedef ::testing::Types<Child1, Child2, Child3> implementations;
TYPED_TEST_CASE(Fixture, implementations);


TYPED_TEST(Fixture, implementations)
{
  this->parent->doSomething();
}
