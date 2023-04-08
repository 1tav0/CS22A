// Octavio Cruz


#include <iostream>
#include <ctime> // Needed for the true randomization
#include <cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main ()
{
	int xRan=0;
    int xRan1=0;
    double  root1;
    double  root2;
    double average;

	srand( time(0)); // This will ensure a really randomized number by using computer clock

	xRan=rand()%20 +1; // Randomizing the number between 1-15.
    xRan1=rand()%20 + 1;
	cout << "The two random numbers between 1-20 are: " << xRan;
	cout<<" and " <<xRan1<<endl;

	average = static_cast<double> (xRan+xRan1)/2;
	cout << setprecision(1) << fixed << showpoint;
	cout << "The average is " << average << endl;
	root1 = sqrt(xRan);
	root2 = sqrt(xRan1);
	cout << setprecision(3) << fixed << showpoint;
	cout << "The square root of " << xRan << " is " << root1 << endl;
	cout << "The square root of " << xRan1 << " is " << root2 << endl;
return 0;
}
