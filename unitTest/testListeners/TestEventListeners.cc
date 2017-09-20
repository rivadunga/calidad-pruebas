#include "gtest/gtest.h"
#include <iostream>

using ::testing::EmptyTestEventListener;
using ::testing::InitGoogleTest;
using ::testing::UnitTest;
using ::testing::TestEventListeners;
using ::testing::TestPartResult;


void printFile(char* value){
    ofstream out("out.html");
    out << index;
    out.close();
}

class EventListener : public EmptyTestEventListener
{
public:
    virtual void OnTestProgramStart(const UnitTest& u)
    {
        fprintf(stdout, "HOLI\n");
        fflush(stdout);
        
    }
    
    virtual void OnTestPartResult(const TestPartResult& tpr)
    {
        printf("%s", tpr.failed() ? "FALLITO\n" : "OKI\n");
        //timeout
    }

};



TEST(TcnUno, tname)
{
    ASSERT_EQ(1,-1);
}

int main(int argc, char** argv)
{
    InitGoogleTest(&argc, argv);
    TestEventListeners& listeners = UnitTest::GetInstance()->listeners();
    delete listeners.Release(listeners.default_result_printer()); //Remove print with colors
    listeners.Append(new EventListener);
    return RUN_ALL_TESTS();
}
