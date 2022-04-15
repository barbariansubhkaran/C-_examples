#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std; 

int main()
{


   cout << "abs(-10) = " << abs(-10) << endl;
   cout << "max(5,4) = " << max(5,4) << endl;
   cout << "min(5,4) = " << min(5,4) << endl;
   cout << "ceil(10.45) = " << ceil(10.45) << endl;
   cout << "floor(10.45) = " << floor(10.45) << endl;
   cout << "round(10.45) = " << round(10.45) << endl;
   cout << "pow(2,3) = " << pow(2,3) << endl;
   cout << "sqrt(100) = " << sqrt(100) << endl;
   cout << "cbrt(1000) = " << cbrt(1000) << endl; 

   cout << "exp(1) = " << exp(1) << endl;
   cout << "exp2(1) = " << exp2(1) << endl;
   cout << "log(20.079) = " << log(20.079) << endl;
   cout << "log2(8) = " << log2(8) << endl;
   cout << "hypot(2,3) = " << hypot(2,3) << endl;

    
   srand(time(NULL));

   int secretNum = rand() % 11;

   cout << "Secret Number : " << secretNum << endl; 


	return 0; 
}