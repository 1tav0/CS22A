#include <iostream>
#include <string>

using namespace std;

int printMenu(){
   cout << "1) Potato chips $1.25" << endl;
   cout << "2) Cookies $0.85" << endl;
   cout << "3) Candies $0.95" << endl;
   cout << "Enter a choice: ";
   while(true){
       int option;
       cin >> option;
       if(option < 1 || option > 3){
           cout << "Invalid choice. try again!" << endl;
       }
       else{
           return option;
       }
   }
}

void printChange(int total){
   int dollars = total / 100;
   total %= 100;
   int quarters = total / 25;
   total %= 25;
   int dimes = total / 10;
   total %= 10;
   int nickels = total / 5;
   total %= 5;
   cout << "Collect your Change" << endl;
   cout << "==========================================" << endl;
   cout << "Dollars: " << dollars << endl;
   cout << "Quarters: " << quarters << endl;
   cout << "Dimes: " << dimes << endl;
   cout << "Nickels: " << nickels << endl;
   cout << "Cents: " << total << endl;
   cout << "==========================================" << endl;
}

int main(){
   int quarter, dime, nickel;
   int numChips = 4, numCookies = 4, numCandies = 4;
   char option;
   while(true){
       cout << "Enter numnber of quarters: ";
       cin >> quarter;
       cout << "Enter numnber of dimes: ";
       cin >> dime;
       cout << "Enter numnber of nickels: ";
       cin >> nickel;
       int total = 0;
       total += quarter * 25;
       total += dime * 10;
       total += nickel * 5;
       while(true){
           int option = printMenu();
           if(option == 1){
               if(numChips != 0){
                   if(total >= 125){
                       cout << "Please take your chips" << endl;
                       numChips--;
                       printChange(total - 125);
                       break;
                   }
                   else{
                       cout << "Insufficient Money" << endl;
                   }
               }
               else{
                   cout << "Sold out. Please make another choice" << endl;
               }
           }
           else if(option == 2){
               if(numCookies!= 0){
                   if(total >= 85){
                       cout << "Please take your cookes" << endl;
                       numCookies--;
                       printChange(total - 85);
                       break;
                   }
                   else{
                       cout << "Insufficient Money" << endl;
                   }
               }
               else{
                   cout << "Sold out. Please make another choice" << endl;
               }
           }
           else{
               if(numCandies != 0){
                   if(total >= 95){
                       cout << "Please take your candies" << endl;
                       numCandies--;
                       printChange(total - 95);
                       break;
                   }
                   else{
                       cout << "Insufficient Money" << endl;
                   }
               }
               else{
                   cout << "Sold out. Please make another choice" << endl;
               }
           }
       }
       cout << "Do you want to try again(Y for yes, N for no)? ";
       cin >> option;
       if(option == 'N' || option == 'n'){
           break;
       }
   }
   return 0;
}
