// This program prints "You Pass" if a student's average is

// 60 or higher and prints "You Fail" otherwise
// Octavio Cruz

#include <iostream>

using namespace std;

int main()

{

float average; // holds the grade average

cout << "Input your average:" << endl;
    cin >> average;

     if (average < 0 || average > 100) cout << "Invalid Data";

else if (average >=90)
    cout << "Your grade is an A" << endl;

else if (average >= 80)
    cout << "Your grade is a B";

else if (average >=60)
    cout << "You pass";
else
    cout << "You fail";


return 0;

}
