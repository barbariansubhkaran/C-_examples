#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
   string sAge = "0";

   cout << "Enter your age: " << endl; 
   cin >> sAge;


   int nAge = stoi(sAge); 

   if((nAge >= 1) && (nAge <= 18))
   {
      cout << "Important Birthday " << endl;  
   }

   else if((nAge == 1) || (nAge == 50))
   {
   	   cout << "Important Birthday " << endl;
   }

   else if ( nAge >= 65)
   {
   	  cout << "Important Birthday " << endl;
   }

   else
   {
      cout << "Not an Important Birthday " << endl; 
   }


	return 0; 
}