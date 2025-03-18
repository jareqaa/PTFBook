#include "UFile.h"
#include <fstream>
#include "UException.h"

// сохранение книги в файл
void TFile::saveToFile(const TAbonentList& fl) const
{
    std::ofstream file;
    file.open(file_name);  // открываем файл

    // проверка что файл открылся
    if (!file.is_open())
    {
        throw TException("Error! Cant open file...\n");
    }

    // запись в файл
    for (auto it = fl.getBegin(); it != fl.getEnd(); it++)
    {
        file << it->get().name << std::endl << it->get().phone_number << std::endl;  // сохранение записей в виде строк: <имя> <номер телефона>
    }

    file.close();  // закрываем файл
}

// копирование книги из файла
void TFile::readFromFile(TAbonentList& fl) const
{
    std::ifstream file;
    file.open(file_name);

    // проверка что файл открылся
    if (!file.is_open())
    {
        throw TException("Error! Cant open file...\n");
    }

    fl.clear();

    // чтение из файла
    std::string name, phone_number;
    while (!file.eof())
    {
        // считывание имени
        std::getline(file, name);
        // проверка что не достигнут конец файла
        if (name == "")
            break;

        // считывание номера телефона
        std::getline(file, phone_number);

        // добавление записи
        fl.add(TAbonent(name, phone_number));
    }

    file.close();
}