#include <iostream>

class Date
{
private:
  int day, month, year;

public:
  Date(int dd, int mm, int yy) : day(dd), month(mm), year(yy) {}

  void setDate(int dd, int mm, int yy)
  {
    day = dd;
    month = mm;
    year = yy;
  }

  int getDay()
  {
    return day;
  }

  int getMonth()
  {
    return month;
  }

  int getYear()
  {
    return year;
  }

  bool validateDate()
  {
    if (month < 1 || month > 12)
    {
      return false;
    }
    if (day > 31 || day < 1)
    {
      return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
    {
      return false;
    }

    if (month == 2)
    {
      if ((year % 4 == 0 && year % 100 != 0) ||  year % 400 == 0) {
        if (day >29) {
          return false;
        }
      } else {
        if (day > 28) {
          return false;
        }
      }
    }

    return true;
  }
};

int main()
{
  int year, month, day;

  std::cout << "Enter the day: " << std::endl;
  std::cin >> day;
  std::cout << "Enter the month: " << std::endl;
  std::cin >> month;
  std::cout << "Enter the year: " << std::endl;
  std::cin >> year;

  Date date(day, month, year);

  std::string isValid = date.validateDate() ? "valid" : "invalid";

  std::cout << "The date " << day << "/" << month << "/" << year << " is " << isValid << std::endl;

  return 0;
}