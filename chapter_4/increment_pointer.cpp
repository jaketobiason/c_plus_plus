#include <iostream>

int main()
{
  long double my_double = 23.5;
  long double *p_my_double = &my_double;

  std::cout << "Value of my_double: " << my_double << std::endl;
  std::cout << "Adding one to my_double..." << std::endl;
  my_double = my_double + 1.0;
  std::cout << "Value of my_double: " << my_double << std::endl;

  std::cout << "Value of *p_my_double: " << p_my_double << std::endl;
  std::cout << "Adding one to p_my_double..." << std::endl;
  long double *p_my_double_one = p_my_double + 1;
  std::cout << "Value of *p_my_double_one: " << p_my_double_one << std::endl;
  std::cout << "Number of bytes incremented: " << sizeof(p_my_double_one - p_my_double) << std::endl;
}