#include <iostream>

class Rectangle
{
private:
  double width, length;

public:
  Rectangle(double width, double length) : width(width), length(length) {}

  double calculateArea()
  {
    return width * length;
  }
};

int main()
{
  double width, length;
  std::cout << "Enter length of Rectangle: " << std::endl;
  std::cin >> length;
  std::cout << "Enter width of Rectangle: " << std::endl;
  std::cin >> width;

  Rectangle rect(width, length);

  std::cout << "Area of rectangle is: " << rect.calculateArea() << std::endl;

  return 0;
}