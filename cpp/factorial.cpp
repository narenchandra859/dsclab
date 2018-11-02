#include<iostream>
using namespace std;
int factorial(int a);
int main()
{
	int a;
	cout<<"\nEnter the number to find factorial ";
	cin>>a;
	int fact=factorial(a);
	cout<<"\nFactorial = "<<fact<<endl;
	return 0;
}
int factorial(int a)
{
	if(a==0)
		return 1;
	else
		return a*(factorial(a-1));
}
	
	
