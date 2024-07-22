#include <iostream>
using namespace std;

double celciusToFahrenheit(double);
int main()
{
  cout << "Please enter a temperature in Celcius: ";
  double celcius;
  cin >> celcius;
  cout << "That temperature in fahrenheit is: " << celciusToFahrenheit(celcius) << endl;
  return 0;
}

double celciusToFahrenheit(double celcius)
{
  double fahrenheit = 1.8 * celcius + 32.0;
  return fahrenheit;
}