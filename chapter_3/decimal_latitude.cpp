#include <iostream>
#include <iomanip>

int main()
{
  const double conversion_factor = 60.0;
  double latitude_degrees;
  double latitude_minutes;
  double latitude_seconds;
  std::cout << "Please enter a latitude in degrees, minutes and seconds and we'll convert that to latitude in decimal." << std::endl;
  std::cout << "Enter degrees: " << std::endl;
  std::cin >> latitude_degrees;
  std::cout << "Enter minutes: " << std::endl;
  std::cin >> latitude_minutes;
  std::cout << "Enter seconds: " << std::endl;
  std::cin >> latitude_seconds;

  double decimal_degrees = latitude_degrees + (latitude_minutes / conversion_factor) + (latitude_seconds / (conversion_factor * conversion_factor));

  std::cout << latitude_degrees << " degrees, " << latitude_minutes << " minutes, " << latitude_seconds << " seconds = " << std::setprecision(6) << decimal_degrees << " degrees." << std::endl;

  return 0;
}