#include <iostream>

using namespace std;

class box
{
public:
    int length;
    int breath;
    int height;

    box(int length, int breath, int height);


};



int volume(int a, int b, int c);

int volume(int a, int b, int c)
{
   return a * b * c;
}


int main()
{

   box box_one;
   box box_two;

 /*
   box_one.length = 1;
   box_one.breath = 2;
   box_one.height = 3;

   box_two.length = 2;
   box_two.breath = 3;
   box_two.height = 4;
*/
   //volume = box_one.length * box_one.breath * box_one.height;

  box::box(box_one(1,2,3));
  box::box(box_two(2, 3, 4));


   cout << "Volume : " << volume(box_one.length,box_one.breath, box_one.height) << endl;

    //volume = box_two.length * box_two.breath * box_two.height;

    cout << "Volume : " << volume(box_two.length,box_two.breath, box_two.height) << endl;

    return 0;
}
