#include <iostream>
#include <vector>

using namespace std;

int main()
{ 
    // converter of cents to different coins
    int cents;
    int cents2;
    
    cout << "Enter an amount in cents: "; 
    cin >> cents ;
    cents2 = cents;

    int dollars = cents / 100;
    cents -= dollars*100;
    int quarters = cents / 25;
    cents -= quarters*25;
    int dimes = cents / 10;
    cents -= dimes*10;
    int nickels = cents / 5;
    cents -= nickels*5;
    int pennies = cents;
    
    cout << "\nYou can provide this change as follow:\n" << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels:  " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    
    //using mod
    
    dollars = cents2 / 100;
    cents2 = cents2 % 100;
    quarters = cents2 / 25;
    cents2 = cents2 % 25;
    dimes = cents2 / 10;
    cents2 = cents2 % 10;
    nickels = cents2 / 5;
    cents2 = cents2 % 5;
    pennies = cents2;
    
    cout << "\nYou can provide this change as follow:\n" << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels:  " << nickels << endl;
    cout << "pennies: " << pennies << endl;
    

	return 0;
}