#include "headers.h"

using namespace std;

//Forward declaration
vector<int> GenerateRandVec(int numOfNums, int min, int max);


//Functions

vector<int> GenerateRandVec(int numOfNums, int min, int max)
{
   vector<int> vecValues;

   srand(time(NULL));
   int i = 0, randVal = 0;

   while(i < numOfNums)
   {
     randVal = min + rand() % ((max + 1) - min);
     vecValues.push_back(randVal);

     i++;
   }

   return vecValues;
}

int main()
{

  vector<int> vecVals = GenerateRandVec(10, 1, 50);

  sort(vecVals.begin(), vecVals.end(), [](int x, int y) { return x > y;});

  for(auto val: vecVals)
  {
    cout << val << endl;
  }

  cout << endl;

 vector<int> evenVecVals;

 copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVecVals), [] (int x ) {return (x % 2) == 0;});

 for(auto val: evenVecVals)
 {
   cout << val << endl;
 }

 int sum = 0;

 for_each(vecVals.begin(), vecVals.end(),[&](int x) {sum += x; });

 cout << "Sum : " << sum << endl;


  return 0;
}
