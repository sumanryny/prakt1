#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

struct PERSON
{
	string Name;
	string FAC;
	string first_name;
	string second_name;
	int GROUP;
	string DATE;
};

void main(PERSON)
{
	const int m = 10;
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	PERSON VUZ[m];
	PERSON* q;
	int B = 0;;
	for (q = VUZ; q <VUZ + m; q++)
	{
		cout << "введите данные " << B + 1 << " студента" << endl;
		cout << "фамилия и инициалы" << endl;
		cin >> q->Name >> q->first_name >> q->second_name;
		cout << "факультет" << endl;
		cin >> q->FAC;
		cout << "группу" << endl;
		cin >> q->GROUP;
		cout << "дату поступления вводить через точку:" << endl;
		cin >> q->DATE;
		B++;
	}
	for (q = VUZ; q < VUZ + m; q++)
	{
		cout << "| Ф.И.О. студента: ";
		cout << q->Name << q->first_name << q->second_name;
		cout << " Группа: " << q->FAC << " " << q->GROUP << " ";
		cout << q->DATE << endl;
	}
	PERSON c;
	int min;
	for (int i = 0; i < m - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < m; j++)
		{
			if (VUZ[j].FAC < VUZ[min].FAC)
			{
				min = j;
			}
		}
		c = VUZ[i];
		VUZ[i] = VUZ[min];
		VUZ[min] = c;

	}
	for (int i = 0; i < m - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < m; j++)
		{
			if (VUZ[j].FAC == VUZ[min].FAC && VUZ[j].GROUP < VUZ[min].GROUP)
			{
				min = j;
			}
		}
		c = VUZ[i];
		VUZ[i] = VUZ[min];
		VUZ[min] = c;

	}
	for (int i = 0; i < m - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < m; j++)
		{
			if (VUZ[j].FAC == VUZ[min].FAC && VUZ[min].GROUP == VUZ[j].GROUP && VUZ[j].DATE < VUZ[min].DATE)
			{
				min = j;
			}
		}
		c = VUZ[i];
		VUZ[i] = VUZ[min];
		VUZ[min] = c;

	}
	for (int i = 0; i < m - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < m; j++)
		{
			if (VUZ[j].FAC == VUZ[min].FAC && VUZ[min].GROUP == VUZ[j].GROUP && VUZ[min].DATE == VUZ[j].DATE && VUZ[j].Name < VUZ[min].Name)
			{
				min = j;
			}
		}
		c = VUZ[i];
		VUZ[i] = VUZ[min];
		VUZ[min] = c;

	}
	int count = 0;
	for (int i = 0; i < m;)
	{
		cout << endl << endl << "факультет " << VUZ[i].FAC << endl << endl;
		for (int j = i; j < m; j++)
		{
			if (VUZ[i].FAC == VUZ[j].FAC)
			{
				cout << "имя " << VUZ[j].Name << " " << VUZ[j].first_name << " " << VUZ[j].second_name <<endl;
				cout << "группа " << VUZ[j].GROUP << endl;
				cout << "дата поступления " << VUZ[j].DATE << endl << endl;
				count++;
			}
			else
			{
				break;
			}
		}
		i += count;
		count = 0;
	}
	system("pause");
}
