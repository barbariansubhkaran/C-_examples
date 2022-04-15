#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{

    string sAge2 = "0"; 
    int nGrade2 = 0; 

    cout << "Enter age: " << endl; 
    cin >> sAge2;

    int nAge2 = stoi(sAge2);

    if(nAge2 < 5)
    {
    	cout << "Too young for school " << endl; 
    }
    
    else if(nAge2 == 5)
    {
    	cout << "Go to Kindergarten " << endl; 
    }

    else if((nAge2 > 5) && (nAge2 <= 17))
    {
    	nGrade2 = nAge2 - 5; 

    	cout << "Go to grade " << nGrade2 << endl; 
    }

    else
    {
    	cout << "Go to college " << endl; 
    }


 

	return 0; 
}