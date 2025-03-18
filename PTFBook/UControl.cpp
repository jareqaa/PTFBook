#include "UControl.h"
#include <fstream>

// ���������� ����� � ����
void TControl::saveToFile() const
{
	std::ofstream file;
	file.open(file_name);	// ��������� ����

	// �������� ��� ���� ��������
	if (!file.is_open())
	{
		throw std::string{ "Error! Cant open file...\n" };
	}

	// ������ � ����
	for (auto it = fl.flist.begin(); it != fl.flist.end(); it++)
	{
		file << it->get().name << std::endl << it->get().phone_number << std::endl;	// ���������� ������� � ���� �����: <���> <����� ��������>
	}

	file.close();	// ��������� ����
}

// ����������� ����� �� �����
void TControl::readFromFile()
{
	std::ifstream file;
	file.open(file_name);

	// �������� ��� ���� ��������
	if (!file.is_open())
	{
		throw std::string{ "Error! Cant open file...\n" };
	}

	clear();

	// ������ �� �����
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


