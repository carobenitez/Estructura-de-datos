#pragma once
#include <iostream>
#include <string>
using namespace std;
class Cuenta
{ double saldo;
public:
	Cuenta(void);
	double get_saldo();
	void set_dinero(double dinero);
	void sacar(double dinero);
	void meter (double dinero);
};

