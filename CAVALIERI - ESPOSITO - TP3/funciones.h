#pragma once
#define _CRT_SECURE_NO_WARNINGS

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

string PrintEnum(int color)
{

	switch (color)
	{
	case 0: return "Rosa";
	case 1: return "Verde";
	case 2: return "Azul";
	case 3: return "Blanco";
	case 4: return "Negro";
	default:
		break;
	}
}