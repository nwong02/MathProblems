#include <iostream>

using namespace std;


double nuclearBinding(int massNumber, int atomicNumber)
{
	double bindingEnergy = 0.0;
	double a_1 = 15.67;
	double a_2 = 17.23;
	double a_3 = 0.75;
	double a_4 = 93.2;
	double a_5 = 0.0;


	if (massNumber % 2 != 0)
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
	double secondTerm = a_2 * pow(cbrt(massNumber), 2);
	double thirdTerm = a_3 * pow(atomicNumber, 2) / cbrt(massNumber);
	double fourthTerm = a_4 * pow(massNumber - 2 * atomicNumber, 2) / massNumber;
	double fifthTerm = a_5 / pow(massNumber, 1.0 / 2.0);
	
	bindingEnergy = firstTerm - secondTerm - thirdTerm - fourthTerm + fifthTerm;

	cout << "The binding energy is: " << bindingEnergy << " MeV" << endl;

	cout << "The binding energy per nucleon is: " << bindingEnergy / massNumber << " MeV" << endl;


	

	return bindingEnergy;
}


//double largestBindingEnergy(double A)
//{
//	
//}

int main()
{
	double A = 0.0;
	double Z = 0.0;

	cout << "Enter the mass number: ";
	cin >> A;

	cout << "Enter the atomic number of that atom: ";
	cin >> Z;

	nuclearBinding(A, Z);


	/*double a = 16.0;
	double squareA = pow(a, 2);
	double rootA = pow(a, 1.0 / 2.0);
	double cubeRootA = cbrt(a);
	cout << squareA << endl;
	cout << rootA << endl;
	cout << cubeRootA << endl;*/

	return 1;
}