#include<iostream>
using namespace std;

class AtM
{
	public:
		void displayMessage()
		{
			cout<<"Welcome to ATM(Automated Teller Machine)"<<endl;
		}
};

int main()
{
	AtM myAtM;
	myAtM.displayMessage();
	return 0;
}
