#include <iostream>
#include <string>
#include <vector>

class Person
{
private:
  std::string name;
  int age;
  std::string country;

public:
  static int number_of_people;
  Person(std::string name, std::string country, int age) : name(name), country(country), age(age)
  {
    number_of_people++;
  }

  std::string getName()
  {
    return name;
  }

  std::string getCountry()
  {
    return country;
  }

  int getAge()
  {
    return age;
  }
};

int Person::number_of_people = 0;

int main()
{
  int number_of_people;
  std::cout << "Enter number of people to add: " << std::endl;
  std::cin >> number_of_people;
  std::vector<Person> people;

  for (int i = 0; i < number_of_people; i++)
  {
    std::string name, country;
    int age;

    std::cout << "Enter name of Person " << i + 1 << ": " << std::endl;
    std::cin >> name;
    std::cout << "Enter age of Person " << i + 1 << ": " << std::endl;
    std::cin >> age;
    std::cout << "Enter country of Person " << i + 1 << ": " << std::endl;
    std::cin >> country;

    Person new_person(name, country, age);

    people.push_back(new_person);
  }

  std::cout << "Details of people: " << std::endl;

  for (auto &person : people)
  {
    int person_number = 1;
    std::cout << "Person " << person_number << "'s name: " << person.getName() << std::endl;
    std::cout << "Person " << person_number << "'s age: " << person.getAge() << std::endl;
    std::cout << "Person " << person_number << "'s country: " << person.getCountry() << std::endl;

    person_number++;
  }

  std::cout << "Total Number of people: " << Person::number_of_people << std::endl;

  return 0;
}
