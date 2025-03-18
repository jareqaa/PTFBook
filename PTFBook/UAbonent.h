#pragma once
#include <string>

struct Trec
{
    std::string name;      // имя абонента
    std::string phone_number;  // номер телефона абонента

    // конструктор
    Trec(const std::string& name_, const std::string& phone_number_) :
        name(!name_.empty() ? name_ : throw std::string{ "Error! Empty input...\n" }),
        phone_number(!phone_number_.empty() ? phone_number_ : throw std::string{ "Error! Empty input...\n" }) {
    }

    // перегрузка оператора <
    bool operator<(const Trec& other) const { return name == other.name ? phone_number < other.phone_number : name < other.name; }
};

class TAbonent
{
    Trec frec;  // запись по абоненту

public:
    // Конструктор с параметрами name и phone_number
    TAbonent(const std::string& name, const std::string& phone_number) : frec(name, phone_number) {}

    // полуение записи
    Trec get() const { return frec; }

    // получение строки
    std::string toStr() const { return frec.name + "     " + frec.phone_number; }

    // изменение записи
    void set(const Trec& frec_) { frec = frec_; }

    // пергрузка оператора <
    bool operator<(const TAbonent& other) const { return frec < other.frec; }
};