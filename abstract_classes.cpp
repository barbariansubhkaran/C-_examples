#include "headers.h"

using namespace std;

class Shape
{
public:

      virtual double Area() = 0;
};

class Circle : public Shape
{
protected:
     double width;

   public:
     Circle(double w)
     {
        width = w;
     }

     double Area() override
     {
          return 3.14159 * pow((width / 2), 2);
     }
};

class Rectangle : public Shape
{
protected:
    double height, width;

  public:

     Rectangle(double h, double w)
     {
          height = h;
          width = w;
     }

     double Area() override final
     {
         return height * width;
     }

};

class Sqaure : public Rectangle
{
public:
      Sqaure(double h, double w) : Rectangle(h, w)
      {
                return height * width;
      }
};

void ShowArea(Shape& shape)
{
  cout << "Area : " << shape.Area() << endl;
}

int main()
{

   Rectangle rectangle(10, 5);
   Circle circle(10);
   Square square(10, 10);
   ShowArea(rectangle);
   ShowArea(circle);
   ShowArea(square);



  return 0;
}
