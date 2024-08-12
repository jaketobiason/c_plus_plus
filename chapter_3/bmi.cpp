#include <iostream>
#include <iomanip>

int main()
{
  int user_feet;
  int user_inches;
  int user_weight_in_pounds;
  const int INCHES_IN_FEET = 12;
  const double INCHES_TO_METERS = 0.0254;
  const float POUNDS_TO_KILOGRAMS = 2.2;

  std::cout << "We will convert your height and weight into your BMI\nFirst enter the feet and inch measurements of your height separately, then your weight in pounds." << std::endl;
  std::cout << "Enter the feet measurement of your height: ";
  std::cin >> user_feet;
  std::cout << std::endl;
  std::cout << "Enter the inches measurement of your height: ";
  std::cin >> user_inches;
  std::cout << std::endl;
  std::cout << "Please enter your weight in pounds: ";
  std::cin >> user_weight_in_pounds;
  std::cout << std::endl;

  int user_height_in_inches = (user_feet * INCHES_IN_FEET) + user_inches;
  double user_height_in_meters = double(user_height_in_inches) * INCHES_TO_METERS;
  double user_weight_in_kilograms = double(user_weight_in_pounds) / POUNDS_TO_KILOGRAMS;
  double user_bmi = user_weight_in_kilograms / (user_height_in_meters * user_height_in_meters);

  std::cout << "Your BMI is: " << std::setprecision(4) << user_bmi << std::endl;
  return 0;
}