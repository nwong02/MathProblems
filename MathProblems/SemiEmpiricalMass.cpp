#include <iostream>

using namespace std;


double nuclearBinding(int massNumber, int atomicNumber)
{
	double a_1 = 15.67;
	double a_2 = 17.23;
	double a_3 = 0.75;
	double a_4 = 93.2;
	double a_5 = 0.0;

	double bindingEnergy = 0.0;

	if (massNumber % 2 == 0)
	{
		a_5 = 0.0;
	}
	if ((massNumber % 2 == 0) && (atomicNumber % 2 == 0))
	{
		a_5 = 12.0;
	}
	else if (((massNumber % 2 == 0) && (atomicNumber % 2 != 0)))
	{
		a_5 = -12.0;
	}

	double firstTerm = a_1 * massNumber;
	double secondTerm = a_3 * pow(atomicNumber, 2) / pow(massNumber, (1.0 / 3.0));
	double thirdTerm = a_4 * pow(massNumber - 2 * atomicNumber, 2) / massNumber;
	double fourthTerm = a_5 / pow(massNumber, (1.0 / 2.0));
	
	bindingEnergy = firstTerm - secondTerm - thirdTerm + fourthTerm;
	cout << "The binding energy is: " << bindingEnergy;
	return bindingEnergy;
}


int main()
{
	double A = 0.0;
	double Z = 0;

	cout << "Enter the mass number: ";
	cin >> A;

	cout << "Enter the atomic number of that atom: ";
	cin >> Z;

	nuclearBinding(A, Z);

	return 1;
}