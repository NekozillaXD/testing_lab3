#include "functions.h"


QString loadresult(QString path)
{
    QFile file(path);
    QString block;
    int i = 0;
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        while(i < 10)
           {
               block = block+file.readLine();
               i++;
           }
    }
    file.close();
    return block;
}
