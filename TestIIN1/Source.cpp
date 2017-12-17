#include "IIN.h"
#include <iostream>
#include <locale.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	char iin[13];
	cin >> iin;
	IIN::IINToData(iin);
}