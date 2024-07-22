#include <iostream>
using namespace std;

void displayTime(int, int);

int main()
{
  cout << "Enter the number of hours: ";
  int hours;
  cin >> hours;
  cout << "Enter the number of minutes: ";
  int minutes;
  cin >> minutes;
  displayTime(hours, minutes);
  return 0;
}

void displayTime(int hours, int minutes)
{
  cout << "Time: " << hours << ":" << minutes << endl;
}