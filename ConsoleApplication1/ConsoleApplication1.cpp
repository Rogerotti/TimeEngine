#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x1, x2, y1, y2;

	std::cout << "Podaj wsp�rz�dn� x1: ";
	std::cin >> x1;

	std::cout << "Podaj wsp�rz�dn� y1: ";
	std::cin >> y1;

	std::cout << "Podaj wsp�rz�dn� x2: ";
	std::cin >> x2;

	std::cout << "Podaj wsp�rz�dn� y2: ";
	std::cin >> y2;

	std::cout << "Odleg�o�� mi�dzy punktami A = (" << x1 << ", " << x2 << "), B = (" << x2 << ", " << y2 << ") wynosi: "
		<< sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) << std::endl;

	system("pause");
	return 0;
}