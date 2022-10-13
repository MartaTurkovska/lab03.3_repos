// Lab_03_3.cpp
// < Турковська Марта >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= -1)
			y = -R-sqrt(x*x-2*x-2*R*x-2*R);
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				if (2 < x )
					y = R*x/2-2*R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}