#include<iostream>
#include<string>

using namespace std;

class AtM
{
	public:
		void displayMessage(string accountName)
		{
			cout<<"Welcome to ATM(automated teller machine) for "<<accountName<<endl;
		}
};


int main()
{
	string nameOfAccount;
	AtM myAtM;
	
	cout<<"Please enter your account name: "<<endl;
	getline(cin,nameOfAccount);
	cout<<endl;
	
	myAtM.displayMessage(nameOfAccount);
	return 0;
}
