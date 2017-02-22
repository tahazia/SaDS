#include <iostream>
#include "gtest/gtest.h"

#include "project1.h"


TEST(update, FirstOne){
    SSLHash n;
    bool a=0,b=0;
    bool k = n.update(a,b);
    
    EXPECT_EQ(k,0);
    
    b = 0;
}
