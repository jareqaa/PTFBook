#include "UAbonentList.h"
#include "UException.h"

// перерузка оператора []
const TAbonent& TAbonentList::operator[](const int& i) const
{
    // проверка правильности параметра i
    if (i < 0  || i >= count())
    {
        throw TException("Error! Wrong index...\n");
    }

    auto it = std::next(flist.begin(), i);  // получаем итератор на i-ый элемент
    return *it;  // возвращаем разыменованный иетратор
}

// найти запись
int TAbonentList::find(const TAbonent& rec) const
{
    auto it = flist.find(rec);  // получение итератора на заданный элемент  

    if (it != flist.end())  // проверяем что элемент был найден
    {
        return std::distance(flist.begin(), it);  // получем расстояние от начала списка до найденного итератора (это и будет номер позиции)
    }
    else
    {
        throw TException("Error! Element doesnt exist...\n");
    }
}

// поиск записи по одному из полей
int TAbonentList::find(const std::string& field, const int& start_pos) const
{
    auto start_it = std::next(flist.begin(), start_pos);

    auto it = std::find_if(start_it, flist.end(), [&field](const TAbonent& rec) {return rec.get().name == field  || rec.get().phone_number == field;});

    if (it != flist.end())  // проверяем что элемент был найден
    {
        return std::distance(flist.begin(), it);  // получем расстояние от начала списка до найденного итератора (это и будет номер позиции)
    }
    else
    {
        throw TException("Error! Element doesnt exist...\n");
    }
}

// удалить запись
void TAbonentList::deleteRec(const TAbonent& rec)
{
    int f = flist.erase(rec);

    if (!f)
    {
        throw TException("Error! Element doesnt exist...\n");
    }
}

// удалить выделенную запись
void TAbonentList::deleteRec(const int& i)
{
    // проверка правильности параметра i
    if (i < 0 || i >= count())
    {
        throw TException("Error! Wrong index...\n");
    }

    auto it = std::next(flist.begin(), i);  // получаем итератор на i-ый элемент
    flist.erase(it);  // удаляем элемент
}

void TAbonentList::add(const TAbonent& rec)
{
    if (!flist.insert(rec).second)
        throw TException("Error! Element already exists...\n");
}