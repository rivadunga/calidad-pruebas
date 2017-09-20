#include "gtest/gtest.h"
#include <iostream>
#include "valueParametrized.h"


using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;


class FixtureInts : public ::testing::TestWithParam<int>{};
class FixtureChars : public ::testing::TestWithParam<char>{};
class FixtureBools : public ::testing::TestWithParam<bool>{};
class FixtureTuples : public ::testing::TestWithParam< ::testing::tuple<int,int> >
{
public:
    int value1 = ::testing::get<0>(GetParam());
    int value2 = ::testing::get<1>(GetParam());
};


TEST_P(FixtureInts, testA)
{
    printValue(GetParam());
}


TEST_P(FixtureChars, testB)
{
    printValue(GetParam());
}


TEST_P(FixtureBools, testC)
{
    printValue(GetParam());
}

TEST_P(FixtureTuples, testD)
{
  printValues(value1, value2);
}


INSTANTIATE_TEST_CASE_P(ints, FixtureInts, Values(1,2,3,4,5));

char array0[] = {'a', 'e', 'i', 'o', 'u'};
INSTANTIATE_TEST_CASE_P(chars, FixtureChars, ValuesIn(array0));

INSTANTIATE_TEST_CASE_P(ints, FixtureBools, Bool());

INSTANTIATE_TEST_CASE_P(tuples, FixtureTuples, Combine(Range(1,10,1), Range(1,10,1)));
