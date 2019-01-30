//==========================================================
//
// Title:      Abdul Mahbub
// Course:     CSC 1101
// Lab Number: Lab04-03
// Author:     Abdul Mahbub
// Date:       1/26/2019
// Description:Program that calculates prices for users
//
//==========================================================
#include <conio.h> // For function getch()
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{

  // Declare variables
	string CityFrom;
	string CityTo;
	int Dist;
	double GasPrice;
 

  // Show application header
  cout << "Welcome to Gas Gems!" << endl;
  cout << "--------------------------" << endl << endl;

  // User Input/First Table
  cout << "Enter city traveled from: ";
  cin >> CityFrom;

  cout << "Enter city traveled to: ";
  cin >> CityTo;

  cout << "Enter distance to travel (miles) : ";
  cin >> Dist;

  cout << "Enter price per gallon ($) : ";
  cin >> GasPrice;
  cout << endl;

  // Constants
	const double MPG = 25.000; // Miles per Gallon
	const int SSM = 100; // Snack Stop Miles
	const double SCS = 7.50; // Snack Cost per Stop

	// Equations for Costs
	double GasCost = (Dist / MPG) * GasPrice;
	double SnackCost = (Dist / SSM) * SCS;
	double TotalCost = GasCost + SnackCost;
	cout << fixed << setprecision(2);


  // Second Table
  cout << setw(28) << left << "From city:" << setw(30) << right << CityFrom << endl;
  cout << setw(28) << left << "To city:" << setw(30) << right << CityTo << endl;
  cout << setw(28) << left << "Distance (miles) :" << setw(30) << right << Dist << endl;
  cout << setw(28) << left << "Price per gallon ($) :" << setw(30) << right << GasPrice << endl;
  cout << endl;

  //Third Table
  cout << setw(28) << left << "Gas Cost ($) :" << setw(30) << right << GasCost << endl;
  cout << setw(28) << left << "Snack Cost ($) :" << setw(30) << right << SnackCost << endl;
  cout << setw(28) << left << "Total Cost ($) :" << setw(30) << right << TotalCost << endl;


  // Show application close
  cout << "\nEnd of Gas Gems" << endl << endl;

  // Pause before application window closes
   cout << "Press any key to exit ..." << endl;
  _getch();

}
