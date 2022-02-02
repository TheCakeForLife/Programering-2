#include "Vector2D.h"
#include <iostream>

using namespace std;

float Vector2D :: X(float input)
{
	x = input;
}

float Vector2D :: Y(float input)
{
	y = input;
}

Vector2D :: Vector2D()
{
	cout << "New Vector2D";
	cout << "New X = ";
}