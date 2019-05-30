#ifndef SORT_TEST_H
#define SORT_TEST_H

#include <gtest/gtest.h>
#include "functions.h"
#include "shared.h"

TEST(sortTest1, emptyFile)
{
    QString inputPath = "D:/TestingLabs-project-master/TestingLabs-project-master/tests/input/sortInput1.txt";
    QFile input(inputPath);

    QString outputPath = "D:/TestingLabs-project-master/TestingLabs-project-master/tests/output/outputSort1.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("D:/TestingLabs-project-master/TestingLabs-project-master/tests/expected/sortExpected1.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

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

TEST(sortTest2, oneString)
{
    QString inputPath = "tests/input/sortInput2.txt";
    QFile input(inputPath);

    QString outputPath = "tests/output/outputSort2.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("tests/expected/sortExpected2.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << "Output file: " << outputString.toStdString() << endl;
    cout << "Expected file: "<< expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))//executeTest(outputString, expectedString))
        SUCCEED();
    else
         FAIL();
}


TEST(sortTest3, manyStrings)
{
    QString inputPath = "tests/input/sortInput3.txt";
    QFile input(inputPath);

    QString outputPath = "tests/output/outputSort3.txt";
    QFile output(outputPath);

    sorting(inputPath, outputPath);

    QFile expected("tests/expected/sortExpected3.txt");

    QString outputString;
    QString expectedString;

    if (output.open(QIODevice::ReadOnly)){
        while(!output.atEnd()){
            outputString = output.readAll();
        }
        output.close();
    }

    if (expected.open(QIODevice::ReadOnly)){
        while(!expected.atEnd()){
            expectedString = expected.readAll();
        }
        expected.close();
    }

    cout << outputString.toStdString() << endl;
    cout << expectedString.toStdString() << endl;

    if (executeTest(outputString, expectedString))
        SUCCEED();
    else
         FAIL();
}

#endif // SORT_TEST_H


