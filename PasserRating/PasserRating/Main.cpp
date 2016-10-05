#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Program: PasserRating
//Author: Tyler Timmins
//Class: ITSE 1307 2002
//Description: Calculates an NFL player's passer rating,
//				and displays what it is.

int main()
{
	//declare variables
	double dComp;
	double dAtt;
	double dYds;
	double dTds;
	double dInts;
	double dRating;
	double dA;
	double dB;
	double dC;
	double dD;
	string sName;

	//get input
	cout << "Enter Your Full Name: ";
	getline(cin, sName);
	cout << endl;
	cout << "Enter number of completions: ";
	cin >> dComp;
	cout << "Enter number of attempts: ";
	cin >> dAtt;
	cout << "Enter total passing yards: ";
	cin >> dYds;
	cout << "Enter number of touchdowns thrown: ";
	cin >> dTds;
	cout << "Enter number of interceptions thrown: ";
	cin >> dInts;

	//calculations
	dA = (dComp / dAtt - 0.3) * 5;
	dB = (dYds / dAtt - 3) * 0.25;
	dC = (dTds / dAtt) * 20;
	dD = 2.375 - (dInts / dAtt * 25);

	//set prescision
	cout << fixed << setprecision(2);

	//if statements
	if (dA < 0)
		dA = 0;
	else if (dA > 2.375)
		dA = 2.375;
	else if (dB < 0)
		dB = 0;
	else if (dB > 2.375)
		dB = 2.375;
	else if (dC < 0)
		dC = 0;
	else if (dC > 2.375)
		dC = 2.375;
	else if (dD < 0)
		dD = 0;
	else if (dD > 2.375)
		dD = 2.375;

	//calculate passer rating
	dRating = ((dA + dB + dC + dD) / 6) * 100;

	//display output
	cout << "The passer rating for " << sName << " is: " << dRating << endl;

	return 0;
}