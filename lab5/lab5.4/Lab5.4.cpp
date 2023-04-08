// This program finds the average time spent programming by a student

// each day over a three day period.

// Octavio Cruz

#include <iostream>

using namespace std;

int main()

{

int numStudents;

float numHours, total, average;

float NumHours, Total, Average;


int student,day = 0; // these are the counters for the loops

int n;

cout << "This program will find the average number of hours a day" << endl << "that a student spent programming or studying Biology over a long weekend\n\n";

cout << "How many students are there ?" << endl << endl;

cin >> numStudents;

cout << "how many days were there in the long weekend? \n";

do {

cin >> n;


    if (n<=0)
        cout << "Please enter a positive integer" << endl;

} while (n<=0);



for( student = 1; student <= numStudents; student++)

{

     total = 0;

     for(day = 1; day <= n; day++)

     {

          cout << "Please enter the number of hours worked programming by student " << student <<" on day " << day << "." << endl;

          cin >> numHours; total = total + numHours;


           cout << "Please enter the number of hours worked on Biology by student " << student <<" on day " << day << "." << endl;

          cin >> NumHours; Total = Total + NumHours;

     }

     average = total / n;
     Average = Total/n;

     cout << endl;

    cout << "The average number of hours per day spent programming by " << "student " << student << " is " << average << endl << endl << endl;
    cout << "The average number of hours per day spent studying Biology by " << "student " << student << " is " << Average << endl << endl << endl;

    if ( average <= Average )

    {
        cout << "The student spent mostly studying programming.\n";

    }
    else
         cout << "The student spent mostly studying Biology. \n";

}

return 0;

}
