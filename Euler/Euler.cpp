// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int n = 4000000,f = 1, f1= 1;
	long int sum = 0;

	while (f <= n)
	{
		f = f + f1;
		f1 = f - f1;

		(f % 2 == 0) ? sum += (long int)f : f;

	}

	std::cout << sum << std::endl;
	std::cin.get();

    return 0;
}

