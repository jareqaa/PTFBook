#pragma once
#include <set>
#include "UAbonent.h"

class TAbonentList
{
	std::set<TAbonent> flist;  // список абонентов

public:

	// перегрузка оператора []
	const TAbonent& operator[](const int& i) const;

	// получение количества записей
	int count() const { return flist.size(); }

	// добавить запись
	void add(const TAbonent& rec);

	// найти запись
	int find(const TAbonent& rec) const;

	// поиск записи по одному из полей
	int find(const std::string& field, const int& start_pos = 0) const;

	// удалить запись
	void deleteRec(const TAbonent& rec);

	// удалить выделенную запись
	void deleteRec(const int& i);

	// очистить список
	void clear() { flist.clear(); }

	// получить итератор на начло множества
	std::set<TAbonent>::const_iterator getBegin() const { return flist.begin(); }

	// получить итератор на конец множества
	std::set<TAbonent>::const_iterator getEnd() const { return flist.end(); }
};