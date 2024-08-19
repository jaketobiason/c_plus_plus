#include <iostream>

int main()
{
  const int arraySize = 20;
  char name[arraySize];
  char dessert[arraySize];

  std::cout << "Enter your name:\n";
  std::cin.getline(name, arraySize);
  std::cout << "Enter your favorite dessert:\n";
  std::cin.getline(dessert, arraySize);

  std::cout << "I have some delicious " << dessert;
  std::cout << " for you, " << name << ".\n";

  std::cout << sizeof name << std::endl;
  std::cout << sizeof dessert << std::endl;
  return 0;
}