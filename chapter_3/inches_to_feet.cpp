#include <iostream>

int main()
{
  int user_height;
  const int inches_in_feet = 12;

  std::cout << "Enter your height in inches: __\b\b";
  std::cin >> user_height;
  std::cout << std::endl;

  int user_feet = user_height / inches_in_feet;
  int user_inches = user_height % inches_in_feet;

  std::cout << "Your height in feet and inches is: " << user_feet << " feet and " << user_inches << " inch(es)." << std::endl;

  return 0;
}