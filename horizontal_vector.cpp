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

void PrintHorzVector(vector<int>& theVec);

void PrintHorzVector(vector<int>& theVec)
{
  int dashes = ceil(theVec.size() * 4);

  for(int n = 0; n < dashes; n++)
  {
    cout << "-";
  }

  cout  << endl;

  for(int i = 0; i < theVec.size(); i++)
  {
    printf("| %2d", i);
  }

  cout << "|" << endl;

  for(int n = 0; n < dashes; n++)
  {
    cout << "-";
  }
  cout  << endl;

  for(int i = 0; i < theVec.size(); i++)
  {
    printf("| %2d", theVec[i]);
  }

  cout << "|" << endl;

  for(int n = 0; n < dashes; n++)
  {
    cout << "-";
  }

  cout  << endl;

}



int main()
{


 vector<int> theVec = { 10, 8, 2, 5, 9, 11, 6, 14};

 PrintHorzVector(theVec);



  return 0;
}
