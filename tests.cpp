#include <gtest/gtest.h>
#include "functions.h"

TEST(Tests, Sanity) {
EXPECT_EQ(true, true);
}

TEST(Tests, isStringAsExpected) {
    functions testObj;
    std::string testInput1 = "     test input    ";
    std::string testInput2 = "test input    ";
    std::string testInput3 = "        test input";
    std::string expectedString = "test input";

    testObj.removeWhiteSpaces(testInput1);
    testObj.removeWhiteSpaces(testInput2);
    testObj.removeWhiteSpaces(testInput3);
    EXPECT_EQ(testInput1, expectedString);
    EXPECT_EQ(testInput2, expectedString);
    EXPECT_EQ(testInput3, expectedString);
}

TEST(Tests, functionRemoveWhiteSpacesNotThrowException) {
    functions testObj;
    std::string testInput1 = "     test input    ";

    EXPECT_NO_THROW(testObj.removeWhiteSpaces(testInput1));
}