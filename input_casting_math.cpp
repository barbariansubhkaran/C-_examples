#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; 

int main()
{
   string sQuestion ("Enter Number 1: ");
   string sNum1, sNum2;

   cout << sQuestion; 
   cin  >> sNum1;

   cout << "Enter Number 2: ";
   cin  >> sNum2;
   
   int nNum1 = stoi(sNum1);
   int nNum2 = stoi(sNum2);


   cout << nNum1 + nNum2 << endl;
   cout << nNum1 - nNum2 << endl; 
   cout << nNum1 % nNum2 << endl; 
   cout << nNum1 * nNum2 << endl;  



   return 0; 
}