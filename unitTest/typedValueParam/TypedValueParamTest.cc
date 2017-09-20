#include "gtest/gtest.h"
#include <iostream>
#include "Data.h"

using ::testing::Range;
using ::testing::Values;
using ::testing::ValuesIn;
using ::testing::Bool;
using ::testing::Combine;


class Fixture : public ::testing::TestWithParam< ::testing::tuple<void*,size_t> >
{
public:
    void* value = ::testing::get<0>(GetParam());
    size_t type = ::testing::get<1>(GetParam());
};


TEST_P(Fixture, testA)
{
    printValue(value);
}

INSTANTIATE_TEST_CASE_P(any, Fixture, new ::testing::tuple<void*,size_t>(1, sizeof(int));
