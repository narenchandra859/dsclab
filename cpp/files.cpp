#include<iostream>
#include<fstream>
using namespace std;
int main() {
	char a[20];
	cin>>a;
	fstream x;
	x.open("Test1",ios::out);
	x<<a;
	return 0;
}
