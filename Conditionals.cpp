//------------------------------------------------
// Name: Samantha Reap
// E-mail: sreap@usc.edu
//------------------------------------------------

//------------------------------------------------
//--- If you wish, you may delete the comments ---
//---       below after you read them          ---
//------------------------------------------------

// Write your C++ program below to compute
// the days in a given month/year. Be sure
// to add appropriate #includes and other 
// necessary statements.  Also be sure to add
// comments and indent your code neatly.

// ------------ Add #includes and other statements here ----------
#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main()
{
  int month, year, days;
  bool isLeapYear = false;

  // perform a cin to obtain the month and year without a prompt

  cin >> month >> year;

 //year has to be divisible by four and year has to be divisible by 100
 // and not 400.

  if (year % 4 == 0 && !(year % 100 == 0 && year % 400 != 0)) {
    isLeapYear = true;
  }

  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    days = 31;
  }
  else if (month == 2) { 
    if (isLeapYear){
      days = 29;
    }
    else {
      days = 28;
    }
  }
  else {
    days = 30;
  }

  // First determine if the given year IS a leap year and set a
  // Boolean variable to 'true' or 'false' apporpriately.

  // Then use that Boolean and the month information to determine
  // the appropriate number of days in the month.

  //Output the result in the following format
  //cout << "There are " << days << " days in that month" << endl;

  cout << "There are "<< days <<" days in that month" << endl;
  return 0;
}

