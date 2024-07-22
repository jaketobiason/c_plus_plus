#include <iostream>
using namespace std;

double furlongsToYards(double);

int main()
{
  double furlongs;
  cout << "Please enter a distance in furlongs: ";
  cin >> furlongs;
  double yards = furlongsToYards(furlongs);
  cout << "That distance in yards is: " << yards << endl;

  return 0;
}

double furlongsToYards(double furlongs)
{
  double yards = furlongs * 220;
  return yards;
}