#include<iostream>
using namespace std;
class ex {
	private: int i;
	public:
		ex(int x=10):i(x){}
		ex* operator->() {
			return this;
		}
	void disp(){cout<<i;}
};
int main() {
	ex x;
	x->disp();
	return 0;
}
