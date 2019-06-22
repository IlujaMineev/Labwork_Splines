#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846  /* pi */
#pragma once
#include <math.h>

double F(double x) {
	return 2 + 5 * x + x*x;
}

double U(double x) {
	return x*x + 5 * x + 8;
}

double UI(double x) {

	long double c1 = 0.314196525355864;
	long double c2 = -0.314196525355864;
	long double c3 = 0.182739030570168;
	long double c4 = -1.35026894834718;

	if (x <= 0.5) {
		return (c1 * exp(sqrt(2.0) * x) + c2 * exp(-sqrt(2.0) * x));
	}
	else {
		return (c3 * exp(x) + c4 * exp(-x) + 1.0);
	}
}

double K1(double x) {
	return x*x + 1;
}

double K2(double x) {
	return 1;
}

double Q1(double x) {
	return exp(-x);
}

double Q2(double x) {
	return x + 1;
}

double F1(double x) {
	return 1;
}

double F2(double x) {
	return x*x*x;
}

//functions

double* ExactSolutionsI(double* arr, int size) {		// точное решение тестовой
	double* result = new double[size + 1];
	for (int i = 0; i < size + 1; i++) {
		result[i] = U(arr[i]);
	}
	return result;
}

double* LS(int start, int stop, int count) {			// сетка
	double * res = new double[count];
	double step = (double)(stop - start) / (double)(count);
	double cur = (double)start;
	res[0] = start;
	for (int i = 1; i < count; i++) {
		cur += step;
		res[i] = cur;
	}
	res[count] = (double)stop;
	return res;
}

double* HLS(double* arr, int s) {						// половинна€ сетка [0; 1]
	double* res = new double[2 * s];
	double hStep = (arr[1] - arr[0]) / 2;
	res[0] = 0.0;
	for (int i = 1; i < 2 * s; i++) {
		res[i] = res[i - 1] + hStep;
	}
	res[2 * s] = 1.0;
	return res;
}

//	—плайн

double SPL(double a, double b, double c, double d, double x, double xi) {		//  аноническа€ запись
	double res = (a + b*(x - xi) + (c / 2.0) * (x - xi) * (x - xi) + (d / 6.0) * (x - xi)*(x - xi)*(x - xi));
	return res;
}

double IprSPL(double b, double c, double d, double x, double xi) {
	double res = (b + c * (x - xi) + (d / 2.0) * (x - xi)*(x - xi));
	return res;
}

double IIprSPL(double c, double d, double x, double xi) {
	double res = (c + d * (x - xi));
	return res;
}

// “естова€ задача

double FuncT(double x) {
	if ((x >= -1) && (x <= 0)) {
		double res = (pow(x, 3) + 3 * pow(x, 2));
		return res;
	}
	else {
		double res = (-pow(x, 3) + 3 * pow(x, 2));
		return res;
	}
}

double Ipr(double x) {
	if ((x >= -1) && (x <= 0)) {
		return 3 * pow(x, 2) + 6 * x;
	}
	else {
		return -3 * pow(x, 2) + 6 * x;
	}
}

double IIpr(double x) {
	if ((x >= -1) && (x <= 0)) {
		return 6 * x + 6;
	}
	else {
		return -6 * x + 6;
	}
}

// 1 задача

double FuncI(double x) {
	double res = (sqrt(x * x - 1.0) / x);
	return res;
}

double IprI(double x) {
	double res = 1.0 / (sqrt(x * x - 1.0) * x * x);
	return res;
}

double IIprI(double x) {
	double res = (2 - 3 * pow(x, 2)) / (sqrt(pow((x * x - 1), 3)) * pow(x, 3));
	return res;
}

double IIIprI(double x) {
	double res = 3 * (2 - 5 * pow(x, 2) + 4 * pow(x, 4)) / (sqrt(pow((x * x - 1), 5)) * pow(x, 4));
	return res;
}

// 2 задача

double FuncII(double x) {
	double res = (sqrt(x * x - 1.0) / x) + cos(10 * x);
	return res;
}

double IprII(double x) {
	double res = 1.0 / (sqrt(x * x - 1.0) * x * x) - 10 * sin(10 * x);
	return res;
}

double IIprII(double x) {
	double res = (2 - 3 * pow(x, 2)) / (sqrt(pow((x * x - 1), 3)) * pow(x, 3)) - 100 * cos(10 * x);
	return res;
}

double IIIprII(double x) {
	double res = 3 * (2 - 5 * pow(x, 2) + 4 * pow(x, 4)) / (sqrt(pow((x * x - 1), 5)) * pow(x, 4)) + 1000 * sin(10 * x);
	return res;
}

// 3 задача

double FuncIII(double x) {
	double res = (sqrt(x * x - 1.0) / x) + cos(100 * x);
	return res;
}

double IprIII(double x) {
	double res = 1.0 / (sqrt(x * x - 1.0) * x * x) - 100 * sin(100 * x);
	return res;
}

double IIprIII(double x) {
	double res = (2 - 3 * pow(x, 2)) / (sqrt(pow((x * x - 1), 3)) * pow(x, 3)) - 10000 * cos(100 * x);
	return res;
}

double IIIprIII(double x) {
	double res = 3 * (2 - 5 * pow(x, 2) + 4 * pow(x, 4)) / (sqrt(pow((x * x - 1), 5)) * pow(x, 4)) + 1000000 * sin(100 * x);
	return res;
}