#include <iostream>
#include <string>
#include <limits>

class Triangle
{
private:
  double side1, side2, side3;

public:
  Triangle(double side1, double side2, double side3) : side1(side1), side2(side2), side3(side3) {}

  std::string getType()
  {
    if (side1 == side2 && side2 == side3)
    {
      return "Equilateral";
    }
    else if ((side1 != side2) && (side2 != side3) && (side1 != side3))
    {
      return "Scalene";
    }
    else
    {
      return "Isosceles";
    }
  }
};

int main()
{
  double side1, side2, side3;

  while (1)
  {
    std::cout << "Enter length of side 1: " << std::endl;
    if (std::cin >> side1)
    {
      break;
    }
    else
    {
      std::cout << "Please enter valid double!" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  while (1)
  {
    std::cout << "Enter length of side 2: " << std::endl;
    if (std::cin >> side2)
    {
      break;
    }
    else
    {
      std::cout << "Please enter valid double!" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  while (1)
  {
    std::cout << "Enter length of side 3: " << std::endl;
    if (std::cin >> side3)
    {
      break;
    }
    else
    {
      std::cout << "Please enter valid double!" << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
  Triangle triangle(side1, side2, side3);

  std::cout << "This triangle is: " << triangle.getType() << std::endl;

  return 0;
}