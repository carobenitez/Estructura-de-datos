#pragma once

class Cuadrado
{
private:
	int lado;
	int area;

public:
	Cuadrado(void);
	int Get_lado();
	int Get_area();
	void Set_lado(int l);
	void Set_area(int a);

	int Calcular();
	
};

