// This program has the user input a number n and then finds the

// mean of the first n positive integers

// Octavio Cruz

#include <iostream>

using namespace std;

int main()

{
int n;
int m;


int total = 0; // total holds the sum of the first n positive numbers

int number; // the amount of numbers

float mean; // the average of the first n positive numbers

cout << "Please enter two positive integer values" << endl;

cin >> n >> m;


if ((n > 0) && (m > 0))

{

     for (number = n; number <= m; number++)

          {

                total = total + number;

          } // curly braces are optional since there is only one statement

mean = static_cast<float> (total)/ ((m - n) + 1)  ; // note the use of the typecast // operator here

cout << "The mean average of the positive integers values between " << n << " & " << m << " is " << mean << endl;

}

else

     cout << "Invalid input - integer must be positive" << endl;

return 0;

}
