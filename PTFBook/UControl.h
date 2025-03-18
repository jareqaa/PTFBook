#include "UAbonentList.h"

class TControl
{
	TAbonentList fl;  // список абонентов

	std::string file_name = "file.txt";  // имя файла на диске

public:

	// получение количества записей в книге
	int count() const { return fl.count(); }

	// получение записи из книги по номеру
	TAbonent get(const int& i) const { return fl[i]; }

	// получение записи в виде строки по номеру
	std::string getStr(const int& i) const { return fl[i].toStr(); }

	// полчение поля имени абонента по номеру записи
	std::string getName(const int& i) const { return fl[i].get().name; }

	// полчение поля номера телефона абонента по номеру записи
	std::string getPhoneNumber(const int& i) const { return fl[i].get().phone_number; }

	// добавление записи в книгу
	void add(const TAbonent& rec) { fl.add(rec); }

	// удалить запись
	void deleteRec(const TAbonent& rec) { fl.deleteRec(rec); }

	// удалить выделенную запись
	void deleteRec(const int& i) { fl.deleteRec(i); }

	// очистить книгу от записей
	void clear() { fl.clear(); }

	// сохранение книги в файл
	void saveToFile() const;

	// копирование книги из файла
	void readFromFile();

	// поиск записи в книге
	int find(const TAbonent& rec) const { return fl.find(rec); }

	// поиск записи по одному из полей
	int find(const std::string& field, const int& start_pos = 0) const { return fl.find(field, start_pos); }

	// получение имени файла
	std::string getFileName() const { return file_name; }

	// изменение имени файла
	void setFileName(std::string& new_file_name) { file_name = new_file_name; }
};