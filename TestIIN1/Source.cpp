#include "IIN.h"
#include <iostream>
#include <locale.h>
#include <windows.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char iin[13], den[3], mes[3], god[5], pol[8];
	cout << "������� ���� ������ �������� \n";
	cin >> den;
	cout << "������� ����� �������� \n";
	cin >> mes;
	cout << "������� ��� �������� \n";
	cin >> god;
	cout << "��� ��� \n";
	cin >> pol;
	/*cout << "������� ��� \n";
	cin >> iin;
	IIN::IINToData(iin);*/
	IIN::DataToIIN(den, mes, god, pol);
}