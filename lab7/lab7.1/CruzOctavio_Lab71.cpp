// Octavio Cruz
#include <iostream>
using namespace std;

typedef int GradeType[100];

float findAverage(const GradeType, int);
int findHighest(const GradeType, int);
int findLowest(const GradeType, int);

int main()
{
   GradeType grades;
   int numberOfGrades;
   int pos;
   float avgOfGrades;
   int highestGrade;
   int lowestGrade;

   pos = 0;

   cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
   cin >> grades[pos];

   while(grades[pos] != -99)
   {
       pos++;

       cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;
       cin >> grades[pos];
   }

   numberOfGrades = pos;

   avgOfGrades = findAverage(grades, numberOfGrades);
   cout << endl << "The average of all the grades is " << avgOfGrades << endl;


   highestGrade = findHighest(grades, numberOfGrades);
   cout << endl << "The highest grade is " << highestGrade << endl;

   lowestGrade = findLowest(grades, numberOfGrades);

   cout << endl << "The lowest grade is " << lowestGrade << endl;

   cin.get();
   return 0;
}


float findAverage(const GradeType array, int size)
{
   float sum = 0;
   for(int pos = 0; pos < size; pos++)
       sum = sum + array[pos];

   return (sum / size);
}


int findHighest(const GradeType array, int size)
{
   int high = array[0];

   for(int pos = 1; pos < size; pos++)
   {
       if(array[pos] > high)
           high = array[pos];
   }

   return high;
}


int findLowest (const GradeType array, int size)
{
   int low = array[0];

   for(int pos = 1; pos < size; pos++)
   {
       if(array[pos] < low)
           low = array[pos];
   }

   return low;
}
