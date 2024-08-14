#include <iostream>

int main()
{
  long long seconds;
  const int seconds_in_minute = 60;
  const int minutes_in_hour = 60;
  const int hours_in_day = 24;

  std::cout << "Enter seconds: ";
  std::cin >> seconds;

  int minutes = seconds / seconds_in_minute;
  int hours = minutes / minutes_in_hour;
  int days = hours / hours_in_day;

  int remaining_hours = hours % hours_in_day;
  int remaining_minutes = minutes % minutes_in_hour;
  int remaining_seconds = seconds % seconds_in_minute;

  std::cout << seconds << " seconds = " << days << " day(s), " << remaining_hours << " hour(s), " << remaining_minutes << " minute(s), " << remaining_seconds << " second(s)." << std::endl;
  return 0;
}