#include <iostream>
using namespace std;

int yearsToMonths(int);

int main()
{
  cout << "Please enter your age in years and I'll tell you how old you are in months: ";
  int years;
  cin >> years;
  cout << "Your age in months is: " << yearsToMonths(years) << endl;
  return 0;
}

int yearsToMonths(int years)
{
  int months = years * 12;
  return months;
}