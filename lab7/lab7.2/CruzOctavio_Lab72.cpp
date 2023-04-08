//Octavio Cruz
#include <iostream>
using namespace std;

const int MAXGRADE = 25;
const int MAXCHAR = 30;

typedef char StringType30[MAXCHAR + 1];
typedef float GradeType[MAXGRADE];

float findGradeAvg(GradeType, int);
char findLetterGrade(float);

int main()
{
StringType30 firstname, lastname;
    int numOfGrades;
    GradeType grades;
    float average;
    char moreinput;

cout << "Please input the number of grades each student will receive." << endl << "This number must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
cin >> numOfGrades;

    while (numOfGrades > MAXGRADE || numOfGrades < 1)
    {
  cout << "Please input the number of grades for each student." << endl << "This number must be a number between 1 and " << MAXGRADE << " inclusive" << endl;
  cin >> numOfGrades;
}

cout << "Please input a y if you want to input more students" << " any other character will stop the input" << endl;
cin >> moreinput;

while(moreinput == 'y' || moreinput == 'Y')
{
  cout << "Please input the first name of the student" << endl;
  cin >> firstname;

  cout << endl << "Please input the last name of the student" << endl;
  cin >> lastname;

  for(int count = 0; count < numOfGrades; count++)
  {
   cout << endl << "Please input a grade" << endl;


   cin >> grades[count];
  }

  cout << firstname << ' ' << lastname << " has an average of ";
  average = findGradeAvg(grades, numOfGrades);
  cout << average << endl;

  cout << "The letter grade is " << findLetterGrade(average) << endl;
  cout << endl << endl << endl;

  cout << "Please input a y if you want to input more students" << " any other character will stop the input" << endl;
  cin >> moreinput;
}

cin.get();
return 0;
}


float findGradeAvg(GradeType array, int numgrades)
{
float sum = 0;
for(int pos = 0; pos < numgrades; pos++)
  sum = sum + array[pos];

return (sum / numgrades);
}


char findLetterGrade(float numgrade)
{
if(numgrade >= 90)
  return 'A';
else if(numgrade >= 80)
  return 'B';
else if(numgrade >= 70)
  return 'C';
else if(numgrade >= 60)
  return 'D';
else
  return 'F';
}
