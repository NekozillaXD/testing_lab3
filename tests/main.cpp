#include "checkcollision_test.h"
#include "save_test.h"
#include "load_test.h"
#include "sort_test.h"
#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
