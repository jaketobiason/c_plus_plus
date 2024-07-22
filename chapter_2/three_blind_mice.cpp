#include <iostream>
using namespace std;

void threeBlindMice(void);
void howTheyRun(void);

int main()
{
  threeBlindMice();
  threeBlindMice();
  howTheyRun();
  howTheyRun();
  return 0;
}

void threeBlindMice()
{
  cout << "Three blind mice" << endl;
}

void howTheyRun()
{
  cout << "See how they run" << endl;
}