#include<iostream>
using namespace std;
class unar {
	private: int x;
	public:
	unar(int i = 10):x(i){}
	void disp() { cout<<x; }
	friend unar operator-(unar);
};
unar operator-(unar a) {
	unar t;
	t.x=-a.x;
	return t;
}
int main() {
	unar a1, a2;
	a2=-a1;
	a2.disp();
	return 0;
}

