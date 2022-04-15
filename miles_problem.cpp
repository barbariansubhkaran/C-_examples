#include <iostream>
#include <cstdlib>

using namespace std; 

int main()
{
	float miles, Kms; 

	cout << "Enter Miles : " << endl; 
	cin >> miles; 

	Kms = miles * 1.609344;

	cout << "In Kilometers: " << Kms << endl;

	return 0; 


}