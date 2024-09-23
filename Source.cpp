#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class hostel
{
private:

	string name;
	int taken;
	int places;  
	float cost;  

public:
	
	hostel(string n, int t, int p, float c)
	{
		setName(n);
		setTaken(t);
		setPlaces(p);
		setCost(c);
	}
	
	void setName(string n)
	{
		name = n;
	}

	void setTaken(int t)
	{
		taken = t;
	}

	void setPlaces(int p)
	{
		places = p;
	}

	void setCost(float c)
	{
		cost = c;
	}
	
	void profit() const
	{
		cout << "��� ��������� " << name << " ����� ������� �� ���� �� " << taken
			<< " ���������� ������ �� " << places << " �� ����� " << cost << "���. ���������� " << taken * cost << "���." << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	int taken, places;
	float cost;

	cout << "������������ ���������: ";
	cin >> name;
	cout << endl;

	cout << "����� ���������� ������� � ���������: ";
	cin >> places;
	while (places < 1)
	{
		cout << "����� ���������� ������� �� ����� ���� ������ 1: ";
		cin >> places;
	}
	cout << endl;

	cout << "���������� ������� �������: ";
	cin >> taken;
	while (taken < 0)
	{
		cout << "���������� ������� ������� �� ����� ���� �������������: ";
		cin >> taken;
	}
	cout << endl;

	cout << "���������� �����: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "����� �� ����� ���� ������������: ";
		cin >> cost;
	}
	cout << endl;

	hostel hotel(name, taken, places, cost);

	hotel.profit();

	return 0;
}