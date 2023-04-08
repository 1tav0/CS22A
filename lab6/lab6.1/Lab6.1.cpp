#include <iostream>

using namespace std;

void show(int);
void isOdd(int);

int main()
{


int number;
char letter;
    while(1)
    {
cout << "Enter an positive integer or -1 to quit." << endl;
cin>>number;


if(number == -1 || number == letter)

{
break;
}


show(number);

isOdd(number);
    }

return 0;

}

void show(int number)
{
cout<<"You Entered "<<number<<endl;
}


void isOdd(int number)
{

if(number % 2 != 0)
    {
    cout<< "given number is odd number " << endl;
    }

}
