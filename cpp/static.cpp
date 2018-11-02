#include<iostream>
using namespace std;
class ex {
	private:
		static int objcount;
	public:
		ex(){objcount++;}
		static void getobjcount(){ cout<<objcount; }
};
int ex::objcount=0;
int main() {
	ex E1, E2, E3;
	cout<<"\nNo of objects = ";
	ex::getobjectcount();
	return 0;
}
