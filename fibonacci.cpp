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

int Fib(int index);

int Fib(int index)
{
   if(index < 2)
   {
     return index;
   }

   else
   {
     return Fib(index - 1) + Fib(index - 2); 
   }
}

int main()
{
   int index;

   cout << "Get Fibonacci Index : " << endl;
   cin >> index;

   printf("fib(%d) = %d\n", index, Fib(index));



  return 0;
}
