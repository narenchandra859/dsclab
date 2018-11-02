#include<iostream>
using namespace std;
class arr {
	private:
		int a[5];
	public:
		arr(){
			for(int i=0;i<5;i++) 
				a[i]=i;
		}
		int operator[](int i) {
			if(i<0||i>4) 
				cout<<"\nOut of bounds";
			else
				return a[i];
		}
};
int main() {
	arr n;
	for(int i = 0;i<6;i++)
		cout<<n[i]<<" ";
	return 0;
}
