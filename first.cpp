#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	cout << " Hello World: "  << endl; 


	if(argc != 1)
	{
		cout << "You entered " << argc << "arguments " << endl; 

		for(int i = 0; i < argc; ++i)
		{
			cout << argv[i] << endl; 
		}
	}



	return 0; 
}