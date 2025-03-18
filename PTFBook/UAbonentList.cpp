#include "UAbonentList.h"

// ��������� ��������� []
const TAbonent& TAbonentList::operator[](const int& i) const
{
	// �������� ������������ ��������� i
	if (i < 0 || i >= count())
	{
		throw std::string{ "Error! Wrong index...\n" };
	}

	auto it = std::next(flist.begin(), i);	// �������� �������� �� i-�� �������
	return *it;	// ���������� �������������� ��������
}

// ����� ������
int TAbonentList::find(const TAbonent& rec) const
{
	auto it = flist.find(rec);	// ��������� ��������� �� �������� �������	

	if (it != flist.end())	// ��������� ��� ������� ��� ������
	{
		return std::distance(flist.begin(), it);	// ������� ���������� �� ������ ������ �� ���������� ��������� (��� � ����� ����� �������)
	}
	else
	{
		throw std::string{ "Error! Element doesnt exist...\n" };
	}
}

// ����� ������ �� ������ �� �����
int TAbonentList::find(const std::string& field, const int& start_pos) const
{
	auto start_it = std::next(flist.begin(), start_pos);

	auto it = std::find_if(start_it, flist.end(), [&field](const TAbonent& rec) {return rec.get().name == field || rec.get().phone_number == field;});

	if (it != flist.end())	// ��������� ��� ������� ��� ������
	{
		return std::distance(flist.begin(), it);	// ������� ���������� �� ������ ������ �� ���������� ��������� (��� � ����� ����� �������)
	}
	else
	{
		throw std::string{ "Error! Element doesnt exist...\n" };
	}
}

// ������� ������
void TAbonentList::deleteRec(const TAbonent& rec)
{
	int f = flist.erase(rec);

	if (!f)
	{
		throw std::string{ "Error! Element doesnt exist...\n" };
	}
}

// ������� ���������� ������
void TAbonentList::deleteRec(const int& i)
{
	// �������� ������������ ��������� i
	if (i < 0 || i >= count())
	{
		throw std::string{ "Error! Wrong index...\n" };
	}

	auto it = std::next(flist.begin(), i);	// �������� �������� �� i-�� �������
	flist.erase(it);	// ������� �������
}

void TAbonentList::add(const TAbonent& rec)
{
	if (!flist.insert(rec).second)
		throw std::string{ "Error! Element already exists...\n" };
}