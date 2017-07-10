// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	unsigned long long n[100000];
	unsigned long long lim = 600851475143,p;
	unsigned long long Num = 600851475143;
	bool isprime;

	n[0] = 2;
	p = 0;

	for (unsigned long long t = 3; t <= lim; t++)
	{
		isprime = true;
		for (int j = 0; j <= p; j++)
		{
			if (t%n[j] == 0)
			{
				isprime = false;
				break;
			}
		}

		if (isprime)
		{
			n[p + 1] = t;
			p++;

			if (Num % t == 0)
			{
				Num = Num / t;
			}
			else
			{
				lim = Num / t;
			}
		}
	}

	std::cout << std::endl<< p << std::endl;
	std::cout << std::endl << "Highest prime factor is "<< Num << std::endl;
	std::cin.get();

    return 0;
}

