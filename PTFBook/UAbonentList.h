#include <set>
#include "UAbonent.h"

class TAbonentList
{
	std::set<TAbonent> flist;	// ������ ���������

public:
	friend class TControl;

	// ���������� ��������� []
	const TAbonent& operator[](const int& i) const;

	// ��������� ���������� �������
	int count() const { return flist.size(); }

	// �������� ������
	void add(const TAbonent& rec);

	// ����� ������
	int find(const TAbonent& rec) const;

	// ����� ������ �� ������ �� �����
	int find(const std::string& field, const int& start_pos = 0) const;

	// ������� ������
	void deleteRec(const TAbonent& rec);

	// ������� ���������� ������
	void deleteRec(const int& i);

	// �������� ������
	void clear() { flist.clear(); }
};