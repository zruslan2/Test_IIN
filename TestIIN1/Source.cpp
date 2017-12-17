#include "IIN.h"
#include <iostream>

using namespace std;

void main()
{
	char iin[13];
	cin >> iin;
	IIN::IINToData(iin);
}