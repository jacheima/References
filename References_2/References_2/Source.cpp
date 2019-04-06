#include<iostream>
#include<string>

using namespace std;

void TerroristFunds(int x, int y);
void JoesCoffeeShop(int& x, int& y);


//declaring variables
int joes_Funds = 2000;
int terrorist_Funds = 10000000;
string userName;
int answer = 0;


void JoeChecksFunds(int x, int y)
{
	int temp = y;
	y = x;
	x = temp;

	cout << "Joes new account balance is : " << joes_Funds << endl;

	system("pause");

}

void HackCheckFunds(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;

	cout << "The Terrorist's new account balance is: " << terrorist_Funds << endl;

	system("pause");
	
}

int main()
{


	cout << "Hello Agent." << endl << endl;


	cout << "This program was designed for the user to steal terrorist funds and move them to another account while replacing the funds with that from another account." << endl;

	cout << "Would you like to begin?" << endl;

	//input the answer
	cin >> answer;

	//Checks the answer and takes the user to the correcct variable
	if (answer == 1)
	{
		//Tell the user the information about the account
		cout << "\n\nJoe's Coffee Shop" << endl;
		cout << "Account Number: 011401533" << endl;
		cout << "Balance: $" << joes_Funds << endl << endl;

	

		//Tell the user the information about the account
		cout << "\n\nTerrorist Account" << endl;
		cout << "Account Number: 811291573" << endl;
		cout << "Balance: $" << terrorist_Funds << endl << endl;


		
		HackCheckFunds(joes_Funds, terrorist_Funds);
		JoeChecksFunds(joes_Funds, terrorist_Funds);

	}
	if (answer == 2)
	{
		cout << "Please select 'yes' when you are ready" << endl;

		cin >> answer;
	}
	if (answer != 1 && answer != 2)
	{
		cout << "Sorry, please choose an option listed above" << endl;
	}

	if (joes_Funds == 10000000 && terrorist_Funds == 2000)
	{

		cout << "Thank you!" << endl;
		system("pause");
		return 0;
	}


}