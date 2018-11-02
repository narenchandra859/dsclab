#include<iostream>
using namespace std;
inline int cube(int x) {
	return x*x*x;
}
int main() {
	int n;	
	cout<<"\nEnter n ";
	cin>>n;
	cout<<"\nCube of n = "<<cube(n)<<endl;
	return 0;
}
