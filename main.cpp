/**
 * @file main.cpp
 * @author Mason Enochs
 * @date 2025-01-24
 * @brief This program adds and multiplies all the numbers from 1 to a user given number
 *
 * This program asks the user for a integer, it then outputs the sum of all numbers from 1 to the user given number \
using a sum function. Does the same with multiplication using a factorial function.
 */

#include <iostream>

using namespace std;

int sum(int n);

int factorial(int n);

// asks the user for a number and outputs the sum and product from 1 to that number
int main() {
  cout << "input a number: ";
  int n = 0;
  cin >> n;
  cout << endl << "Here is the sum of all the numbers from 1 to " << n << ": ";
  cout << sum(n) << endl;
  cout << "Here is the factorial of " << n << ": " << factorial(n) << endl;

  return 0;
}

// returns the sum of all the numbers from 1 to n
int sum(int n)
{
  int sum = 0;
  while(n > 0)
    {
      sum += n;
      n--;
    }
  return sum;
}

// returns the factorial of n
int factorial(int n)
{
  int product = 1;
  while(n > 0)
    {
      product *= n;
      n--;
    }
  return product;
}
