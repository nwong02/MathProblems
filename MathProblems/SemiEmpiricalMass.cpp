#include <iostream>

using namespace std;


double nuclearBinding(int massNumber, int atomicNumber)
{
	double a_1 = 15.67;
	double a_2 = 17.23;
	double a_3 = 0.75;
	double a_4 = 93.2;

	double a_5 = 0;
	if ()

	double firstTerm = a_1 * massNumber;
	double secondTerm = a_3 * pow(atomicNumber, 2) / pow(massNumber, (1.0 / 3.0));
	double thirdTerm = a_4 * pow(massNumber - 2 * atomicNumber, 2) / massNumber;
	
}


int main()
{
	return 1;
}