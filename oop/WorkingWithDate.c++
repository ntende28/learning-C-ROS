
#include <iostream>
#include <ctime>  // Import the ctime library
using namespace std;

/*
There are two different data types used to store the date and time: time_t for timestamps and 
struct tm for datetime structures.

Datetime structures
    tm_sec   - The seconds within a minute
    tm_min   - The minutes within an hour
    tm_hour  - The hour within a day (from 0 to 23)
    tm_mday  - The day of the month
    tm_mon   - The month (from 0 to 11 starting with January)
    tm_year  - The number of years since 1900
    tm_wday  - The weekday (from 0 to 6 starting with Sunday)
    tm_yday  - The day of the year (from 0 to 365 with 0 being January 1)
    tm_isdst - Positive when daylight saving time is in effect, zero when not in effect and 
            negative when unknown

To access the structure elements; struct tm dtime;
                                  dtime.tm_sec

*/

int main () {
  // Get the timestamp for the current date and time
  time_t timestamp;
  time(&timestamp);

  // Display the date and time represented by the timestamp
  cout << ctime(&timestamp);
  return 0;
}