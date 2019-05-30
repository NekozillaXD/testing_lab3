#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <QFile>
#include <string>
#include <cstdio>
#include <fstream>
#include <QDebug>
#include <cstdlib>
#include <algorithm>

bool check(int plx, int ply, int plh, int plw, int obx, int oby, int obh, int obw);
int saveresult(int score, QString name, QString file_name);
QString loadresult(QString path);
void sorting(QString Path, QString OutputPath);

struct S{
      int num;
      QString sss;
    };
#endif // FUNCTIONS_H
