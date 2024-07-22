#include <iostream>
using namespace std;

double lightToAstro(double);

int main()
{
  cout << "Enter the number of light years: ";
  double lightYears;
  cin >> lightYears;
  cout << lightYears << " light years = " << lightToAstro(lightYears) << " astronomical units." << endl;
  return 0;
}

double lightToAstro(double lightYears)
{
  double astro_units = lightYears * 63241.00;
  return astro_units;
}