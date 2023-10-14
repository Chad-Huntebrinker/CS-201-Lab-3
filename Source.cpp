#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	const double childPrice = 10.95;
	const double adultPrice = 19.99;
	const double seniorPrice = 18.99;
	const double vipPrice = 7.99;
	double currentDay = 0, finalDay = 0;
	char userInput;
	int childrenNum = 0, adultNum = 0, seniorNum = 0, vipNum = 0;
	double childrenProfit = 0, adultProfit = 0, seniorProfit = 0, vipProfit = 0;

	cout << fixed << setprecision(2);
	cout << "Welcome to Fun Park Menu System !!" << endl;
	for (int i = 1; i <= 3; ++i) {
		int childrenTotal = 0, adultTotal = 0, seniorTotal = 0, vipTotal = 0;		//This is to reset the values to 0 in
		childrenNum = 0, adultNum = 0, seniorNum = 0, vipNum = 0;					//the loop so that it doesn't incorrectly
		childrenProfit = 0, adultProfit = 0, seniorProfit = 0, vipProfit = 0;		//add some value twice.
		cout << "Starting Day " << i << endl;
		do {
			cout << "Enter (C)hild, (A)dult, (S)enior, (V)ip or (Q)uit >> ";
			cin >> userInput;
			cout << endl;
			cout << endl;
			if ((userInput == 'C') || (userInput == 'c')) {
				cout << "How many children? ";
				cin >> childrenNum;
				childrenTotal = childrenNum + childrenTotal;
			}
			else if ((userInput == 'A') || (userInput == 'a')) {
				cout << "How many adults? ";
				cin >> adultNum;
				adultTotal = adultNum + adultTotal;
			}
			else if ((userInput == 'S') || (userInput == 's')) {
				cout << "How many seniors? ";
				cin >> seniorNum;
				seniorTotal = seniorNum + seniorTotal;
			}
			else if ((userInput == 'V') || (userInput == 'v')) {
				cout << "How many VIPs? ";
				cin >> vipNum;
				vipTotal = vipNum + vipTotal;
			}
			else {
				userInput = toupper(userInput);
			}
		} while (userInput != 'Q');
		//Calculates the total for the day.
		cout << "Day " << i << endl;
		childrenProfit = childrenNum * childPrice;			 
		adultProfit = adultNum * adultPrice;				
		seniorProfit = seniorNum * seniorPrice;
		vipProfit = vipNum * vipPrice;
		//Outputs the total.
		cout << "	 Child " << childrenTotal << " @ 10.95 = " << childrenProfit << endl;
		cout << "	 Adult " << adultTotal << " @ 19.99 = " << adultProfit << endl;
		cout << "	 Senior " << seniorTotal << " @ 18.99 = " << seniorProfit << endl;
		cout << "	 VIP " << vipTotal << " @ 7.99 = " << vipProfit << endl;
		cout << endl;
		currentDay = childrenProfit + adultProfit + seniorProfit + vipProfit;
		cout << "	 Total = " << currentDay << endl;
		//Calculates the total for all the days.
		finalDay = finalDay + currentDay;
		cout << endl;

	}
	cout << "The total for all days is " << finalDay << endl;
	return 0;
}
