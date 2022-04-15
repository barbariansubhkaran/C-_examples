#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std; 

int main()
{
  
   for(int i = 0; i <= 10; ++i)
   {
   	  cout << i << endl;
   }

   int arr1[] = { 1, 2, 3};
   int arrSize = sizeof(arr1)/sizeof(arr1[0]);
   
   for(int i = 0; i < arrSize; ++i)
   	{
       
        cout << arr1[i] << endl;
    }


    for(auto x: arr1)
    {
    	cout << x << endl;
    }

    int num = 4; 

    string isEven = (( num % 2) == 0) ? "Even" : "Odd";

    cout << "Even or Odd : " << isEven << endl; 

    
	return 0; 
}