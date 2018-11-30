#include<iostream>
#include<fstream>
using namespace std;
class PB {
	private: 
		char name[20];	
		char num[20];
	public: 
		void readdata() {
			cout<<"\nEnter name and number  ";
			cin>>name>>num;
			intofile();
		}
		void writedata() {	
			fstream x;
			x.open("Phone.txt",ios::binary|ios::in);
			while(!x.eof()) {
				x>>name;
				cout<<"Name : "<<name<<"\n";
				x>>num;
				cout<<"Number : "<<num<<"\n";
			}
		}
		void intofile() {
			fstream x;
			x.open("Phone.txt",ios::app|ios::binary|ios::out);
			x<<name<<"\n";
			x<<num<<"\n";
		}
};
int main(){
	fstream x;
	x.open("Phone.txt",ios::out);
	x.close();
	PB p[5];
	for(int i=0;i<5;i++) 
		p[i].readdata();
	p[0].writedata();
	return 0;
}
