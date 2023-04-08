// This program illustrates the use of the Switch statement.

// Octavio Cruz

#include <iostream>

using namespace std;

int main()

{

char grade;

cout << "What grade did you earn in Programming I ?" << endl;

cin >> grade;

if ( grade == 'A')
    cout << "You Passed!" << endl << "an A - excellent work !";
else if (grade == 'B')
    cout << "You Passed!" << endl << "you got a B - good job";
else if (grade== 'C')
    cout << "You Passed!" << endl << "earning a C is satisfactory";
else if ( grade == 'D')
    cout << "You Passed!" << endl << "while D is passing, there is a problem";
    else if ( grade == 'F')
    cout << "you failed - better luck next time" << endl;
       else
       cout <<  "You did not enter an A, B, C, D, or F" << endl;

/*switch ( grade ) // This is where the switch statement begins

{

     case 'A': cout << "You Passed!" << endl;

     break;

     case 'B': cout << "You Passed!" << endl;

     break;

     case 'C': cout << "You Passed!" << endl;

     break;

     case 'D': cout << "You Passed!" << endl;

     break;

     case 'F': cout << " " << endl;

     break;

     default: cout << " " << endl;

}


switch( grade ) // This is where the switch statement begins

{

     case 'A': cout << "an A - excellent work !" << endl;

     break;

     case 'B': cout << "you got a B - good job" << endl;

     break;

     case 'C': cout << "earning a C is satisfactory" << endl;

     break;

     case 'D': cout << "while D is passing, there is a problem" << endl;

     break;

     case 'F': cout << "you failed - better luck next time" << endl;

     break;

     default: cout << "You did not enter an A, B, C, D, or F" << endl;

}




*/

return 0;

}
