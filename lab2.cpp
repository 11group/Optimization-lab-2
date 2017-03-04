#include "lab2.h"

void lab2::Pirson::func()
{
	F = 2 * exp(-((x - 1) / 2)*((x - 1) / 2) - ((y - 1) / 3)*((y - 1) / 3));
	F += exp(-((x - 2) / 2)*((x - 2) / 2) - ((y - 1) / 2)*((y - 1) / 2));
}
