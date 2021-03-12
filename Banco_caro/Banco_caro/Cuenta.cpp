#include "StdAfx.h"
#include "Cuenta.h"


Cuenta::Cuenta(void)
{
	saldo=0;
}
double Cuenta::get_saldo()
{
	return saldo;
}
void Cuenta::set_dinero(double dinero)
{
	saldo=dinero;  
}
void Cuenta::sacar(double dinero)
	{
		if(saldo>dinero)
		{
			saldo=saldo-dinero;
		}else{
			saldo=0;
		}
	}
	void Cuenta::meter (double dinero)
	{
		saldo=saldo+dinero;
	}
