#include "functions.h"

int saveresult(int score, QString name, QString file_name)
{
    QFile file(file_name);
    // Если файл успешно открыт для записи в текстовом режиме
    if(file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream writeStream(&file);
            writeStream << score <<" "<< name << endl;
            file.close();
            return 0;
        }
    else
        {
            std::cout << "Can't open leaderboard" << std::endl;
            return 1;
        }

}
