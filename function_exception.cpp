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

// FORWARD DECLARATION 
vector<int> Range(int start, int max, int step);



vector<int> Range(int start, int max, int step)
{
	int i = start; 

	vector<int> range; 

	while( i <= max)
	{
		range.push_back(i);

		i += step; 
	}


	return range; 
}


int main()
{
    
  vector<int> range = Range(1, 10, 2);

  for(auto y: range)
  {
  	cout << y << endl; 
  }

  double num1 = 0, num2 = 0; 

  cout << "Enter Number 1 : " << endl; 
  cin >> num1; 

  cout << "Enter Number 2 : " << endl; 
  cin >> num2; 

  try
  {
  	 if(num2 == 0)
  	 {
  	 	throw "Division by Zero is not possible "; 
  	 } 

  	 else
    {

      printf("%.1f / %.1f = %.2f\n", num1, num2, ( num1 / num2 ));

     }

  }
 
 catch(const char* exp)
 {
 	cout << "Error : " << exp << endl;
 }

 
  try
  {
  	cout << "Throwing Exception " << endl; 

  	throw runtime_error("Error Occured ");

  	cout << "Can you print me ? " << endl; 
  }

  catch(exception &exp)
  {
  	

  	cout << "Handled Exception : " << exp.what() << endl;


  }

  catch(...)
  {

  	cout << "Default Exception Catch" << endl; 

  }







	return 0;
}