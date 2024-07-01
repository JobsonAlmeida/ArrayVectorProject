#include <iostream>
#include <vector>
#include "Functions.h"

int main()
{
	std::vector<int> vector1;
	std::vector<int> vector2;
	std::vector <std::vector<int>> vector2D;

	vector1.push_back(10);
	vector1.push_back(20);

	displayVectorLinerElements(vector1, 1);
	
	std::cout << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);

	displayVectorLinerElements(vector2, 2);

	std::cout << std::endl;

	vector2D.push_back(vector1);
	vector2D.push_back(vector2);

	displayVector2DElements(vector2D);

	std::cout << std::endl;

	vector1.at(0) = 1000;

	displayVector2DElements(vector2D);

	std::cout << std::endl;

	displayVectorLinerElements(vector1, 1);

}