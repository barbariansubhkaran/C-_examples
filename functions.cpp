#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std; 

double AddNumbers(double num1, double num2);

void AssignAge(int age);

int AssignAge2(int age);


double AddNumbers(double num1 = 0, double num2 = 0)
{
	return num1 + num2; 
}

void AssignAge(int age)
{
	age = 24; 
}

int AssignAge2(int age)
{
	age = 24; 

	return age; 
}



int main()
{
   
  double num1 , num2;

  cout << "Enter num1: " << endl;
  cin >> num1;

  cout << "Enter num2: " << endl;
  cin >> num2;

  cout << "Sum :" << AddNumbers(num1, num2) << endl;
 
  int age = 43; 

  age = AssignAge2(age);

  cout << "New Age: " << age << endl; 



	return 0; 
}