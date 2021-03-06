#pragma once
////////////////////////////////////////////
////////////////////////////////////////////
////	Три метода поиска минимума	////////
////	функции на отрезке			////////
////	и метод поиска интервала	////////
////	содержащего минимум функции ////////
////////////////////////////////////////////

// UPD0: добавлен метод Хукса и Дживса
// UPD1: в процессе разработки методы наискорейшего спуска и Флэтчера-Ривза
// UPD2: Хукса и Дживса надо переделывать

#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>

namespace lab1
{
	class Dihotomia
	{
		double x1, x2, f1, f2;
		double a = 0., b = 1.;
		double eps = 1E-6;
		int AmountDih = 0;
	public:
		Dihotomia() {};
		~Dihotomia() {};
		double func(double x);
		void Dih();
	};

	class Golden_Section
	{
		double x1, x2, f1, f2;
		double a = 0., b = 1.;
		double eps = 1E-6;
		int AmountGold = 0;
	public:
		Golden_Section() {};
		~Golden_Section() {};
		double func(double x);
		void Gold();
	};

	class Fibonacci
	{
		double x1, x2, f1, f2;
		double a = 0., b = 1.;
		std::vector <double> F;
		double eps = 1E-6;
		int AmountFib = 0;
	public:
		Fibonacci() {};
		~Fibonacci() {};
		double func(double x);
		void Fib();
	};

	class Algoritm
	{
		double x0, x1, x2, f1, f2;
		double h;
		//double eps = 1E-14;
		double eps = 0.1;
	public:
		Algoritm() {};
		~Algoritm() {};
		double func(double x);
		void Alg();
	};
}

namespace lab2
{
	class HuckJivs
	{
	protected:
		double x1, x2, x0, f1, f2, f0;
		double eps = 1e-3;
		int AmountHuckJivs = 0;
		double func(double x);
		bool flag = 0, flag2 = 1;
		void SurroundingArea(double *x0);

	public:
		HuckJivs() {};
		~HuckJivs() {};
		void HuckJivsRun();
	};

	class FletcherRivs
	{
	protected:
		double x1, x2, x0, f1, f2, f0;
		double S0, S1, S2;
		double eps = 1e-3;
		int AmountFletcherRivs = 0;
		double func(double x);
		double Derivative = 0;
		bool flag1 = 0;

	public:
		FletcherRivs() {};
		~FletcherRivs() {};
		void FletcherRivsRun();
	};

	class SteepestDescent
	{
	protected:
		double x1, x2, x0, f1, f2, f0;
		double eps = 1e-3;
		int AmountSteepestDescent = 0;
		double func(double x);
		double Derivative = 0;

	public:
		SteepestDescent() {};
		~SteepestDescent() {};
		void SteepestDescentRun();

	};

}
