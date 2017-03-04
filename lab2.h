#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <vector>
#include <iostream>


namespace lab2
{

	class Pirson
	{
	public:
		Pirson() {};
		~Pirson() {};
		double F;
		double x, y;
	private:
		void func();
	};


}
