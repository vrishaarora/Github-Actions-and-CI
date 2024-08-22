
#include "gtest/gtest.h"
#include "../header/rectangle.hpp"
#include <stdexcept>

TEST(ConstructorTests, defaultConstr){ 
    Rectangle a; 
    EXPECT_EQ(a.getWidth(), 0); 
    EXPECT_EQ(a.getHeight(), 0); 
}

TEST(ConstructorTests, paramConstrPos){ 
    Rectangle a(5,2); 
    EXPECT_EQ(a.getWidth(), 5); 
    EXPECT_EQ(a.getHeight(), 2); 
}

TEST(ConstructorTests, paramConstrNeg){ 
    EXPECT_THROW(Rectangle(-4,-2), std::runtime_error);
}

TEST(AreaTests, areaZeros){ 
    Rectangle a; 
    EXPECT_EQ(a.area(), 0); 
}

TEST(AreaTests, areaPos){ 
    Rectangle a(5,2); 
    EXPECT_EQ(a.area(), 10); 
}

TEST(AreaTests, areaNeg){ 
    Rectangle a;
    a.set_height(-5); 
    a.set_width(-1);  
    EXPECT_THROW(a.area(), std::runtime_error);
}

TEST(PeriTests, periZeros) { 
    Rectangle a; 
    EXPECT_EQ(a.perimeter(), 0); 
}

TEST(PeriTests, periPos) { 
    Rectangle a(5,2); 
    EXPECT_EQ(a.perimeter(), 14); 
}

TEST(PeriTests, periNeg) { 
    Rectangle a;
    a.set_height(-5); 
    a.set_width(-1);  
    EXPECT_THROW(a.area(), std::runtime_error); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
