#include<iostream>
#include<string>
using namespace std;
class person {
	protected:
		string name;
		int age;
	public:
		person(){
			cout<<"\nEnter name : ";
			cin.ignore();
			getline(cin,name);
			cout<<"\nEnter age : ";
			cin>>age;
		}
};
class teacher: public person {
		private:
			int publ;
		public:
			teacher(){
				cout<<"\nEnter number of publications : ";
				cin>>publ;
			}
			void print() {
				cout<<"\nName - "<<name<<"\nAge - "<<age<<"\nNumber of publications - ";
				cout<<publ<<endl;
			}
};
class student: public person {
		protected:
			int a, b, c;
		public:
			student() {
				cout<<"\nEnter the marks in 3 subjects(out of 100) : ";
				cin>>a>>b>>c;
			}
};
class marks: public student {
		private:
			float perc;
		public:
			void print() {
				perc=(a+b+c)/3;
				cout<<"\nName - "<<name<<"\nAge - "<<age<<"\nMarks in 3 subjects - ";
				cout<<a<<" "<<b<<" "<<c<<" "<<"\nPercentage - "<<perc<<endl;
			}
};
int main() {
	int x, y;
	cout<<"\nEnter the number of students : ";
	cin>>x;
	if(x!=0)
		cout<<"\nEnter student details : ";
	marks m[x];
	cout<<"\nEnter the number of teachers : ";
	cin>>y;
	if(y!=0)
		cout<<"\nEnter teacher details : ";
	teacher t[y];
	cout<<"\n\t\t Student Details : ";
	if(x!=0){
	for(int i=0;i<x;i++) 
		m[i].print();
	}
	else{
		cout<<"No student details entered ";
	}
	cout<<"\n\t\t Teacher Details : ";
	if(y!=0){
	for(int i=0;i<y;i++)
		t[i].print();
	}
	else{
		cout<<"No teacher details entered ";
	}
	cout<<"\n";
	return 0;
}
