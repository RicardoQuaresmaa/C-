#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	
	cout<<"enter two integers to compare : ";
	cin>>n1>>n2;
	getchar();
	
	if(n1>=n2)
	cout<<n1<<">="<<n2;
	
	if(n1<=n2)
	cout<<n1<<"<="<<n2;
	
	getchar();
	return 0;
}
