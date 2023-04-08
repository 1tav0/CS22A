// Octavio Cruz
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string item1, item2;
	float price1, price2;	      // The price of 2 items
	int   quantity1, quantity2;  // The quantity of 2 items
	double ExtPrice1, ExtPrice2; // The ext. price of both items
    cout << setprecision(2) << fixed << showpoint;

    cout << "Please input the name of the first item." << endl;
    cin >> item1;
	cout << "\nPlease input the price and quantity of the first item." << endl;
    cin >> price1 >> quantity1;

    ExtPrice1 = price1*quantity1;
    ExtPrice2 = price2*quantity2;


    cout << "\nPlease input the name of the second item." << endl;
    cin >> item2;
    cout << endl << "\nPlease input the price and quantity of the second item." << endl;
    cin >> price2 >> quantity2;


	cout << left << setw(15) << "ITEM" << setw(15) << "QUANTITY" << setw(15) << "PRICE" << setw(15) << "ExtPrice" << endl << endl;

	cout << left << setw(15) << item1 << setw(15) << quantity1 << setw(15) << price1 << setw(15) << price1*quantity1 << endl;
	cout << left << setw(15) << item2 << setw(15) << quantity2 << setw(15) << price2 << setw(15) << price2*quantity2 << endl;


	return 0;

}
