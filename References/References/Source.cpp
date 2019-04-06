#include<iostream>
#include<string>

using namespace std;

void JoesCoffeeShop(int x, int y);
void TerroristFunds(int& x, int& y);

//declaring variables
int joes_Funds = 2000;
int terrorist_Funds = 10000000;
string userName;
int answer;


void JoeChecksFunds(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "Joes new account balance is : " << joes_Funds << endl;
}

void HackCheckFunds(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "The Terrorist's new account balance is: " << terrorist_Funds << endl;
}

int main()
{
	

	cout << "Hello Agent. Please enter your user name to continue." << endl << endl;;
	//Input to the variable userName
	cin >> userName;

	cout << endl << endl;

	cout << "Hello, " << userName << endl << endl;

	cout << "This program was designed for the user to steal terrorist funds and move them to another account while replacing the funds with that from another account." << endl;

	cout << "Which account would you like to check?" << endl;

	cout << "    1) Joe's Coffee Shop" << endl;
	cout << "    2) Terrorist Account" << endl << endl;

	//Checks the answer and takes the user to the correcct variable
	if (answer == 1)
	{
		//Tell the user the information about the account
		cout << "\n\nJoe's Coffee Shop" << endl;
		cout << "Account Number: 011401533" << endl;
		cout << "Balance: $" << joes_Funds << endl << endl;

		cout << "What would you like to do?" << endl;
		cout << "    3) Swap Joe's Coffee Shop Account" << endl;
		cout << "    4) Go Back" << endl;

		cin >> answer;

		if (answer == 3)
		{
			JoeChecksFunds();
		}
		else 
		{
			cout << "Which account would you like to check?" << endl;

			cout << "    1) Joe's Coffee Shop" << endl;
			cout << "    2) Terrorist Account" << endl << endl;

			cin >> answer;

		}
	}
	if (answer == 2)
	{
		//Tell the user the information about the account
		cout << "\n\nTerrorist Account" << endl;
		cout << "Account Number: 811291573" << endl;
		cout << "Balance: $" << terrorist_Funds<< endl << endl;

		cout << "What would you like to do?" << endl;
		cout << "    3) Swap Terrorist Account" << endl;
		cout << "    4) Go Back" << endl;

		cin >> answer;

		if (answer == 3)
		{
			HackCheckFunds();
		}
		else
		{
			cout << "Which account would you like to check?" << endl;

			cout << "    1) Joe's Coffee Shop" << endl;
			cout << "    2) Terrorist Account" << endl << endl;

			cin >> answer;
		}
	}
	if (answer != 1 && answer != 2)
	{
		cout << "Sorry, please choose an option listed above" << endl;
	}



}


