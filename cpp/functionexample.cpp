#include<iostream>
using namespace std;
void swap(int &x, int &y) { // <- void swap(int *x, int *y) for pass by address
	int t=x;
	x=y;
	y=t;
}
int main() {
	int a, b;
	cout<<"\nEnter a and b";
	cin>>a>>b;
	cout<<"\nBefore swap : "<<a<<b;
	swap(a,b);
	//swap(&a,&b); // <- Pass by address
	cout<<"\nAfter swap : "<<a<<b<<endl;
	return 0;
}
/* void swap(int *p, int *q) { //<--Pass by address
	int t = *p;
	*p=*q;
	*q=t;
} */
	
