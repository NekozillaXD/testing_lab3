#ifndef SHARED_H
#define SHARED_H
#include "functions.h"
#include <gtest/gtest.h>
using namespace std;

bool executeTest(QString output, QString expected)
{
    if (output == expected)
        return true;
    else
        return false;
}

#endif // SHARED_H
