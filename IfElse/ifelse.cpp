#include<iostream>

using namespace std;

int main()
{
	int x;
	int n=2;
	
	cout<<"Enter the number to set : ";
	cin>>x;
	getchar();
	
	if(x%n==0)
	cout<<"even";
	
	else
	cout<<"odd";
	
	getchar();
	return 0;
}
