//How many coins (11, 5, 1) do i need to get the user value.
#include <iostream>
using namespace std;
int CoinsCalculator(int coinValue, int userValue);


int main(){

int userValue = 0;
int coin1 = 1;
int coin5 = 5;
int coin11 = 11;

int coin1Needed = 0;
int coin5Needed = 0;
int coin11Needed = 0;


cout << "Enter the value: ";
cin >> userValue;


coin11Needed = CoinsCalculator(coin11, userValue);
userValue = userValue - (coin11 * coin11Needed);

coin5Needed = CoinsCalculator(coin5, userValue);
userValue = userValue - (coin5 * coin5Needed);

coin1Needed = CoinsCalculator(coin1, userValue);
userValue = userValue - (coin1 * coin1Needed);


cout << endl << "You need " << coin11Needed << " <11> coins, " << coin5Needed << " <5> coins and " << coin1Needed << " <1> coins." << endl;
cout << "You have a total of " << coin11Needed + coin5Needed + coin1Needed << " coins." << endl;
    
    return 0;
}


int CoinsCalculator(int coinValue, int userValue){

    int coinsNeeded = 0;
    while(userValue >= coinValue){
    userValue -= coinValue;
    coinsNeeded += 1;
    }
    return coinsNeeded;
}
