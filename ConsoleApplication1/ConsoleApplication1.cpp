#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float x1, x2, y1, y2;

	std::cout << "Podaj wspó³rzêdn¹ x1: ";
	std::cin >> x1;

	std::cout << "Podaj wspó³rzêdn¹ y1: ";
	std::cin >> y1;

	std::cout << "Podaj wspó³rzêdn¹ x2: ";
	std::cin >> x2;

	std::cout << "Podaj wspó³rzêdn¹ y2: ";
	std::cin >> y2;

	std::cout << "Odleg³oœæ miêdzy punktami A = (" << x1 << ", " << x2 << "), B = (" << x2 << ", " << y2 << ") wynosi: "
		<< sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) << std::endl;

	system("pause");
	return 0;
}