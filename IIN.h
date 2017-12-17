#ifndef __IIN_H
#define __IIN_H

#include <stdio.h>

namespace IIN
{
	static void DataToIIN(char den[3], char mes[3], char god[5], char pol[8]);
	static void IINToData(char iin[13]);
}

#endif
