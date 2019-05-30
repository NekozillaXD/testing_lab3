#include "functions.h"

void saveresult(int score, QString name, QString file_name)
{
    QFile file(file_name);
    // Если файл успешно открыт для записи в текстовом режиме
    if(file.open(QIODevice::Append | QIODevice::Text))
        {
            QTextStream writeStream(&file);
            writeStream << score <<" "<< name << endl;
            file.close();
        }
    else
        {
            std::cout << "Can't open leaderboard" << std::endl;
        }

}
