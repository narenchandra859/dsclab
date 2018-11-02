#include<iostream>
using namespace std;
class con {
	private:
		int x, y;
	public:
		con(){x=0;y=0;};
		con(int a, int b){x=a; y=b;}
		con(const con &C2){
		x=C2.x;
		y=C2.y;
		}
		void disp();
};
void con::disp(){
	cout<<x<<" "<<y<<endl;
}
int main() {
	con C1;
	cout<<"\nDefault constructor ";
	C1.disp();
	cout<<"\nParameterized constructor ";
	con C2(2,3);
	C2.disp();
	con C3=C2;
	cout<<"\nCopy constructor ";
	C3.disp();
	return 0;
}
