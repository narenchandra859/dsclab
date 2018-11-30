#include<iostream>
using namespace std;
class A{
	public:
		A(){cout<<"\nObject of A constructed ";} 
		~A(){cout<<"\nObject of A destructed ";}
};
class B:public A{
	        public:
                B(){cout<<"\nObject of B constructed ";}
                ~B(){cout<<"\nObject of B destructed ";}

};
class D{
	public:
                D(){cout<<"\nObject of D constructed ";}
                ~D(){cout<<"\nObject of D destructed ";}

};
class C:public B, public D{
        public:
                C(){cout<<"\nObject of C constructed ";}
                ~C(){cout<<"\nObject of C destructed ";}

};
int main() {
	cout<<"\n\t A, B, C are in MULTILEVEL inheritance (A-->B-->C)";
	cout<<"\n\t B, C, D are in MULTIPLE inheritance (B-->C<--D)";
	cout<<"\nA constructor destructor call - ";
        { A x; }
	cout<<"\nB constructor destructor call - ";
        { B y; }
	cout<<"\nC constructor destructor call - ";
        { C z; }
	cout<<"\nD constructor destructor call - ";
        { D m; }
	cout<<"\n";
	return 0;
}
