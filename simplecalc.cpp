/***************************************************************************
 * By Paris Richards
 * 
 * Date Started: 12/19/2023
 * Date Finished: 12/26/2023
 * 
 * Four Function Terminal Calculator
 * 
 * Purpose: Calculator to calculate simple math operations such as addition,
 *          subtraction, multiplication, and division.
***************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "               " << "Simple Calculator" << "               " << endl;
  cout << "             " << "(By Paris Richards)" << "              " << endl;
  cout << "   Only 2 numbers can be worked with at a time   " << endl;

  double num1, num2, result;
  char operation;

  cout << endl << "Enter a number: ";
  cin >> num1;
  cout << "Enter an operation (+ - * /): ";
  cin >> operation;

  while ( operation != '+' && operation != '-' && operation != '*' && operation != '/' )
  {
   cout << endl << "Invalid operation (must use (+ - * /) symbols)" << endl;
   cout << "The first number is " << num1 << endl;
   cout << "Enter appropriate operation: ";
   cin >> operation;
  }

  cout << "Enter another number: ";
  cin >> num2;

  if (operation == '+')
  {
   result = num1 + num2;
  }
  if (operation == '-')
  {
    if (num1 > num2)
    {
     result = num1 - num2;
    }
    else
    {
     result = num2 - num1;
    }
  }
  if (operation == '*')
  {
   result = num1 * num2;
  }
  if (operation == '/')
  {
   if (num2 != 0)
   {
    result = num1 /num2;
   }
   else
   {
    cout << "Division by zero is not allowed!" << endl;
    return 1;
   }
  }

  cout << endl << "Result: " << setw(30) << result;
}