#include "StdAfx.h"
#include "Cuadrado.h"


Cuadrado::Cuadrado(void)
{
}
int Cuadrado::Get_lado()
{
 return lado;
}
int Cuadrado::Get_area()
{
 return area;
}
void Cuadrado::Set_lado(int l)
{
 lado=l;
}
void Cuadrado::Set_area(int a)
{
 area=a;
}
int Cuadrado::Calcular()
{
	area=lado*lado;
	return area;
}