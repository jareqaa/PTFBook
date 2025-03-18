#pragma once
#include <string>
#include <set>
#include "UAbonentList.h"

class TFile
{
	std::string file_name = "file.txt";  // имя файла на диске

public:

	// сохранение книги в файл
	void saveToFile(const TAbonentList& fl) const;

	// копирование книги из файла
	void readFromFile(TAbonentList& fl) const;

	// получение имени файла
	std::string getFileName() const { return file_name; }

	// изменение имени файла
	void setFileName(std::string& new_file_name) { file_name = new_file_name; }
};