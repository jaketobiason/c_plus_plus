#include <iostream>

int main()
{
  long long world_pop;
  long long usa_pop;

  std::cout << "Enter the population of the world: ";
  std::cin >> world_pop;
  std::cout << "Enter the population of the USA: ";
  std::cin >> usa_pop;

  double percent_pop = (double(usa_pop) / double(world_pop)) * 100;

  std::cout << "The population of the USA is " << percent_pop << "\% of the world population." << std::endl;

  return 0;
}