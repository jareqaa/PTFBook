#include "UAbonentList.h"

class TControl
{
	TAbonentList fl;	// ������ ���������

	std::string file_name = "file.txt";	// ��� ����� �� �����

public:

	// ��������� ���������� ������� � �����
	int count() const { return fl.count(); }

	// ��������� ������ �� ����� �� ������
	TAbonent get(const int& i) const { return fl[i]; }

	// ��������� ������ � ���� ������ �� ������
	std::string getStr(const int& i) const { return fl[i].toStr(); }

	// �������� ���� ����� �������� �� ������ ������
	std::string getName(const int& i) const { return fl[i].get().name; }

	// �������� ���� ������ �������� �������� �� ������ ������
	std::string getPhoneNumber(const int& i) const { return fl[i].get().phone_number; }

	// ���������� ������ � �����
	void add(const TAbonent& rec) { fl.add(rec); }

	// ������� ������
	void deleteRec(const TAbonent& rec) { fl.deleteRec(rec); }

	// ������� ���������� ������
	void deleteRec(const int& i) { fl.deleteRec(i); }

	// �������� ����� �� �������
	void clear() { fl.clear(); }

	// ���������� ����� � ����
	void saveToFile() const;

	// ����������� ����� �� �����
	void readFromFile();

	// ����� ������ � �����
	int find(const TAbonent& rec) const { return fl.find(rec); }

	// ����� ������ �� ������ �� �����
	int find(const std::string& field, const int& start_pos = 0) const { return fl.find(field, start_pos); }

	// ��������� ����� �����
	std::string getFileName() const { return file_name; }

	// ��������� ����� �����
	void setFileName(std::string& new_file_name) { file_name = new_file_name; }
};