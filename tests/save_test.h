#ifndef SAVE_TEST_H
#define SAVE_TEST_H
#include <gtest/gtest.h>
#include "functions.h"
#include "shared.h"

TEST(saveTest1, normal)
{
    QString inputPath = "tests/input/saveInput1.txt";
    QFile input(inputPath);
    input.open(QFile::WriteOnly|QFile::Truncate);
    input.close();

    QFile expected("tests/expected/saveExpected1.txt");
    QString name = "Player1";

    saveresult(10, name, inputPath);

    QString outputString;
    QString expectedString;

    if (input.open(QIODevice::ReadOnly)){
        while(!input.atEnd()){
            outputString = input.readAll();
        }
        input.close();
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

TEST(saveTest2, longName)
{
    QString inputPath = "tests/input/saveInput2.txt";
    QFile input(inputPath);
    input.open(QFile::WriteOnly|QFile::Truncate);
    input.close();

    QFile expected("tests/expected/saveExpected2.txt");
    QString name = "reeeeeeeeeeeeeeeeeeeeeeaaaaaaaaaaaaaaaaallllllyyylooooooooongplaaaayeeeeeeer";

    saveresult(0, name, inputPath);

    QString outputString;
    QString expectedString;

    if (input.open(QIODevice::ReadOnly)){
        while(!input.atEnd()){
            outputString = input.readAll();
        }
        input.close();
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
TEST(saveTest3, highScores)
{
    QString inputPath = "tests/input/saveInput3.txt";
    QFile input(inputPath);
    input.open(QFile::WriteOnly|QFile::Truncate);
    input.close();

    QFile expected("tests/expected/saveExpected3.txt");
    QString name = "Player3";

    saveresult(1000000000, name, inputPath);

    QString outputString;
    QString expectedString;

    if (input.open(QIODevice::ReadOnly)){
        while(!input.atEnd()){
            outputString = input.readAll();
        }
        input.close();
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
TEST(saveTest4, specialSymbols)
{
    QString inputPath = "tests/input/saveInput4.txt";
    QFile input(inputPath);
    input.open(QFile::WriteOnly|QFile::Truncate);
    input.close();

    QFile expected("tests/expected/saveExpected4.txt");
    QString name = "1234567890()_=<>";

    saveresult(15000, name, inputPath);

    QString outputString;
    QString expectedString;

    if (input.open(QIODevice::ReadOnly)){
        while(!input.atEnd()){
            outputString = input.readAll();
        }
        input.close();
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
TEST(saveTest4, nofile)
{
    if(saveresult(0,"noname", "nofile") == 1) {
        SUCCEED();
    }
    else {
        FAIL();
    }
}
#endif // SAVE_TEST_H

