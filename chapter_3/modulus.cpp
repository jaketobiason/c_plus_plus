#include <iostream>
int main()
{
  using namespace std;
  const int Pounds_per_stone = 14;
  int pounds;

  cout << "Enter your weight in pounds: ";
  cin >> pounds;
  int whole_stone = pounds / Pounds_per_stone;
  int remainder_pounds = pounds % Pounds_per_stone;
  cout << pounds << " pounds are " << whole_stone << " stone, " << remainder_pounds << " pounds(s)" << endl;
  return 0;
}