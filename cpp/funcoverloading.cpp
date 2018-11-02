#include<iostream>
using namespace std;
int absolute(int);
float absolute(float);
int main() {
	int a=-5;
	float x=10.2;
	cout<<"Abs of a, x = "<<absolute(a)<<" "<<absolute(x)<<endl;
	return 0;
}
int absolute(int a) {
	if(a<0)
		return -a;
	else
		return a;
}
float absolute(float x) {
	if(x<0)
		return -x;
	else
		return x;
}
