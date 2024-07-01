#include <vector>
#include <iostream>
#include "Functions.h"

void displayVectorLinerElements(std::vector<int>& vector, int number)
{
	std::cout << "vector" << number << " elements and size:\n";
	for (int i = 0; i <= (vector.size() - 1); i++)
	{
		std::cout << "vector1[" << i << "]: " << vector.at(i) << "\n";
	}
	std::cout << "vector1 size: " << vector.size() << "\n";
}

void displayVector2DElements(std::vector <std::vector<int>>& vector2D)
{
	std::cout << "Elements in vector2D:\n";
	for (int i = 0; i <= (vector2D.size() - 1); i++)
	{
		for (int j = 0; j <= (vector2D.size() - 1); j++)
		{
			std::cout << "vector2D[" << i << "]" << "[" << j << "]: " << vector2D.at(i).at(j) << "\n";
		}
	}
}