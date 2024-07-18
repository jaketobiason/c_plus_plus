#include <iostream>
using namespace std;

double poundToStone(double);

int main()
{
  cout << "Enter a weight in pounds and we will convert it to stone!" << endl;
  double pounds;
  cin >> pounds;
  double stone = poundToStone(pounds);
  cout << pounds << " pounds = " << stone << " stone." << endl;
  return 0;
}

double poundToStone(double pounds)
{
  return pounds / 14;
}