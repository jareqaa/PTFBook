#include "UControl.h"
#include <fstream>

// сохранение книги в файл
void TControl::saveToFile() const
{
    std::ofstream file;
    file.open(file_name);  // открываем файл

    // проверка что файл открылся
    if (!file.is_open())
    {
        throw std::string{ "Error! Cant open file...\n" };
    }

    // запись в файл
    for (auto it = fl.flist.begin(); it != fl.flist.end(); it++)
    {
        file << it->get().name << std::endl << it->get().phone_number << std::endl;  // сохранение записей в виде строк: <имя> <номер телефона>
    }

    file.close();  // закрываем файл
}

// копирование книги из файла
void TControl::readFromFile()
{
    std::ifstream file;
    file.open(file_name);

    // проверка что файл открылся
    if (!file.is_open())
    {
        throw std::string{ "Error! Cant open file...\n" };
    }

    clear();

    // чтение из файла
    std::string name, phone_number;
    while (!file.eof())
    {
        std::getline(file, name);
        if (name == "")
            break;
        std::getline(file, phone_number);
        add(TAbonent(name, phone_number));
    }

    file.close();
}