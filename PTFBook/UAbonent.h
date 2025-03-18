#include <string>

struct Trec
{
	std::string name;			// ��� ��������
	std::string phone_number;	// ����� �������� ��������

	// �����������
	Trec(const std::string& name_, const std::string& phone_number_) : 
		name(!name_.empty() ? name_ : throw std::string{"Error! Empty input...\n"}), 
		phone_number(!phone_number_.empty() ? phone_number_ : throw std::string{ "Error! Empty input...\n" }) {}

	// ���������� ��������� <
	bool operator<(const Trec& other) const { return name == other.name ? phone_number < other.phone_number : name < other.name; }
};

class TAbonent
{
	Trec frec;	// ������ �� ��������

public:
	// ����������� � ����������� name � phone_number
	TAbonent(const std::string& name, const std::string& phone_number) : frec(name, phone_number) {}

	// �������� ������
	Trec get() const { return frec; }

	// ��������� ������
	std::string toStr() const { return frec.name + "     " + frec.phone_number; }

	// ��������� ������
	void set(const Trec& frec_) { frec = frec_; }

	// ��������� ��������� <
	bool operator<(const TAbonent& other) const { return frec < other.frec; }
};