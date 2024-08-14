#include <iostream>
#include <iomanip>

int main()
{
  int miles_driven;
  int gallons_of_gas;
  std::cout << "How many miles have you driven: ";
  std::cin >> miles_driven;
  std::cout << "How many gallons of gas have you used while driving those miles: ";
  std::cin >> gallons_of_gas;

  float miles_per_gallon = float(miles_driven) / float(gallons_of_gas);

  std::cout << "MPG = " << std::setprecision(4) << miles_per_gallon << std::endl;

  return 0;
}