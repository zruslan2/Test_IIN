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
	cout << "Введите день своего рождения \n";
	cin >> den;
	cout << "Введите месяц рождения \n";
	cin >> mes;
	cout << "Введите год рождения \n";
	cin >> god;
	cout << "Ваш пол \n";
	cin >> pol;
	/*cout << "Введите ИИН \n";
	cin >> iin;
	IIN::IINToData(iin);*/
	IIN::DataToIIN(den, mes, god, pol);
}