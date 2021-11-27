#include "std_lib_facilities (2).h"

int main()
{
  //initialize variables
	string sign;
	double firstNumber = 0;
	double secondNumber = 0;
	double answer = 0;

  //ask user for input
	cout << "Enter an operator and then two numbers (pressing enter inbetween each input)\n";

  //while loop that can allow the use to continuously calculate
	while (cin >> sign >> firstNumber >> secondNumber) {
		if      (sign == "*") answer = firstNumber * secondNumber;
		else if (sign == "/") 
    {
      //to avoid div by zero set to impossible string
      if (secondNumber == 0) sign = "impossible";
      else answer = firstNumber / secondNumber;
    }
		else if (sign == "+") answer = firstNumber + secondNumber;
		else if (sign == "-") answer = firstNumber - secondNumber;
    else sign = "unknown";
		
    //if unknown retry
    if (sign == "unknown") 
    {
      cout << "unknown operator\n";
      cout << "Try again\n";
    }
    //if div by zero, retry
    else if (sign == "impossible") 
    {
      cout << "cannot divide by zero\n";
      cout << "Try again\n";
    }
    else
    // display the calculation
    cout << firstNumber << ' ' << sign << ' ' << secondNumber <<" = " << answer << '\n';
	}

  //exit program
	return 0;
}