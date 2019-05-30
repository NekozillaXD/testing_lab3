#ifndef LOAD_TEST_H
#define LOAD_TEST_H

#include <gtest/gtest.h>
#include "functions.h"
#include "shared.h"


TEST(loadTest1, morethan10) {
    QString inputPath = "tests/input/loadInput1.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("tests/expected/loadExpected1.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

TEST(loadTest2, lessthan10) {
    QString inputPath = "tests/input/loadinput3.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("tests/expected/loadExpected3.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();

}

TEST(loadTest3, none) {
    QString inputPath = "tests/input/loadInput2.txt";
    QString outputString = loadresult(inputPath);
    QFile expected("tests/expected/loadExpected2.txt");
    QString expectedString;

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
        FAIL();
}

#endif // LOAD_TEST_H
