#pragma once
#include <iostream>
#include <string>
using namespace std;

typedef enum {
	Rosa,
	Verde,
	Azul,
	Blanco,
	Negro
}eColor;

void PrintEnum(int color)
{
	switch (color)
	{
	case Rosa: cout << "Rosa" << endl; break;
	case Verde: cout << "Verde" << endl; break;
	case Azul: cout << "Azul" << endl; break;
	case Blanco: cout << "Blanco" << endl; break;
	case Negro: cout << "Negro" << endl; break;
	default:
		break;
	}
}