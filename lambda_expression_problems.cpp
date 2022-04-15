#include "headers.h"

using namespace std;

//Forward declaration
vector<int> GenerateRandVec(int numOfNums, int min, int max);
vector<int> GenerateFibList(int maxNums);



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

vector<int> GenerateFibList(int maxNums)
{
    vector<int> listOfFibs;
    int i = 0;
    function<int(int)> Fib = [&Fib](int n)
    {
      return n < 2 ? n : Fib(n - 1) + Fib(n - 2);
    };

    while(i < maxNums)
    {
      listOfFibs.push_back(Fib(i));
      i++;
    }

    return listOfFibs;
}

int main()
{


   vector<int> vecVals = GenerateRandVec(10, 1, 50);

   int divisor;
   vector<int> vecVals2;

   cout << "List of Values divisible by : " << endl;
   cin >> divisor;

   copy_if(vecVals.begin(), vecVals.end(), back_inserter(vecVals2), [divisor](int x) { return (x % divisor) == 0;});

   for(auto val: vecVals2)
   {
     cout << val  << endl;
   }

   vector<int> doubleVec;

   for_each(vecVals.begin(), vecVals.end(), [&](int x) {doubleVec.push_back(x * 2); });

  for(auto val: doubleVec)
  {
    cout << "DBL : " << val << endl;
  }

 function<int(int)> Fib = [&Fib](int n) { return n < 2 ? n : Fib(n - 1) + Fib(n - 2);};

 cout << "Fib 4 : " << Fib(4) << endl;

 vector<int> listOfFibs = GenerateFibList(10);

 for(auto val: listOfFibs)
 {
   cout << val << endl;
 }



  return 0;
}
