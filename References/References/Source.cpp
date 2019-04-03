#include<iostream>
#include<string>

using namespace std;

void JoesCoffeeShop(int x, int y);
void TerroristFunds(int& x, int& y);


void JoeChecksFunds()
{

}

void HackCheckFunds()
{

}

int main()
{
	int joes_Funds = 2000;
	int terrorist_Funds = 10000000;
	string userName;
	int answer;

	cout << "Hello Agent. Please enter your user name to continue." << endl << endl;;
	cin >> userName;

	cout << endl << endl;

	cout << "Hello, " << userName << endl << endl;

	cout << "This program was designed for the user to steal terrorist funds and move them to another account while replacing the funds with that from another account." << endl;
	
	system("pause");

	cout << "Which account would you like to check?" << endl;

	cout << "    1) Joe's Coffee Shop" << endl;
	cout << "    2) Terrorist Account" << endl << endl;

	if (answer == 1)
	{
		JoeChecksFunds();
	}
}


