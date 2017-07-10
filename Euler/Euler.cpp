// Euler.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	unsigned long long n[100000];
	unsigned long long Num = 123; 
	unsigned long long lim = Num,p;
	
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
			n[p+1] = t;
			p++;

			for (int j = 0; j <= p; j++)
			{
				if ((Num % n[j] == 0)&&(Num / n[j]!=1))
				{
					Num = Num / n[j];
					j--;
				}
				else
				{
					lim = Num / n[j];
				}
			}
		}
	}

	std::cout << std::endl << "Highest prime factor is "<< Num << std::endl;
	std::cin.get();

    return 0;
}

