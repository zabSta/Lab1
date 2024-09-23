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
		cout << "Для гостиницы " << name << " общая выручка за день за " << taken
			<< " заселенных комнат из " << places << " по ренте " << cost << "руб. составляет " << taken * cost << "руб." << endl;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name;
	int taken, places;
	float cost;

	cout << "Наименование гостиницы: ";
	cin >> name;
	cout << endl;

	cout << "Общее количество номеров в гостинице: ";
	cin >> places;
	while (places < 1)
	{
		cout << "Общее количество номеров не может быть меньше 1: ";
		cin >> places;
	}
	cout << endl;

	cout << "Количество занятых номеров: ";
	cin >> taken;
	while (taken < 0)
	{
		cout << "Количество занятых номеров не может быть отрицательным: ";
		cin >> taken;
	}
	cout << endl;

	cout << "Посуточная рента: ";
	cin >> cost;
	while (cost < 0)
	{
		cout << "Рента не может быть отрицатеьной: ";
		cin >> cost;
	}
	cout << endl;

	hostel hotel(name, taken, places, cost);

	hotel.profit();

	return 0;
}