#include<iostream>
using namespace std;
class rectangle {
	private:
		int width, height;
	public:
		void set_values(int,int);
		int area();
};
void rectangle::set_values(int x, int y) {
	width=x;
	height=y;
}
int rectangle::area() {
	return width*height;
}
int main() {
	rectangle r;
	r.set_values(6,8);
	cout<<"\nArea = "<<r.area()<<endl;
	return 0;
}
