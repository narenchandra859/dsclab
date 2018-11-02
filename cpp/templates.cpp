#include<iostream>
#include<cstdlib>
using namespace std;
template<class X>
class stack {
	private:
		X a[100];
		int top;
	public:
		stack(int i=-1):top(i){}
		void push(X ele) {
			if(top>100) {
				cout<<"\nStack overflow";
				exit(0);
			}
			else
				a[++top]=ele;
		}
		X pop() {
			if(top==-1) {
				cout<<"\nStack underflow";
				exit(0);
			}
			else
				return a[top--];
		}
		void disp() {
			cout<<"\nCurrent stack is \n";			
			for(int i = 0;i<=top;i++)
				cout<<a[i]<<endl;
		}
		stack operator+(stack M) {
			stack T;
			T.top=M.top;
			for(int i=0;i<=top;i++) {
				T.a[i]=a[i]+M.a[i];
			}
			return T;
		}
};
int main() {
	stack<int> s;
	stack<int> r;
	stack<float> p;
	starting:
	cout<<"\nEnter 1 or 3 to access INT stacks";
	cout<<"\nEnter 2 to access FLOAT stacks";
	cout<<"\nEnter 4 to add the int stacks, or enter 5 to add all stacks\n";
	int c;
	cin>>c;
	switch(c) {
		case 1 : {
				while(1) {
				int ch;
				cout<<"\nEnter 1/2/3/0 for push/pop/display/exit ";
				cin>>ch;
				switch(ch) {
						case 1:{ 
							int ele;
							cout<<"Enter the element to push ";
							cin>>ele;
							s.push(ele);
							} break;
						case 2:{
							cout<<s.pop()<<" popped! \n";
							}break;
						case 3: {
							s.disp();
							}break;
						default: goto starting;
				}
				}
			}break;
		case 2 : {
			while(1) {
                                int ch;
                                cout<<"\nEnter 1 / 2 / 3 / 0 for push/pop/disp/exit ";
                                cin>>ch;
                                switch(ch) {
                                                case 1:{
                                                        float ele;
                                                        cout<<"Enter the element to push ";
                                                        cin>>ele;
                                                        p.push(ele);
                                                        } break;
                                                case 2:{
                                                        cout<<p.pop()<<" popped! \n";
                                                        }break;
                                                case 3: {
                                                        p.disp();
                                                        }break;
                                                default: goto starting;
                                }               
                                }
		}break;
		case 3: {
			while(1) {
                                int ch;
                                cout<<"\nEnter 1 / 2 / 3 / 0 for push/pop/disp/exit ";
                                cin>>ch;
                                switch(ch) {
                                                case 1:{
                                                        int ele;
                                                        cout<<"Enter the element to push ";
                                                        cin>>ele;
                                                        r.push(ele);
                                                        } break;
                                                case 2:{
                                                        cout<<r.pop()<<" popped! \n";
                                                        }break;
                                                case 3: {
                                                        r.disp();
                                                        }break;
                                                default: goto starting;
                                }   
             	}
		}break;
		case 4: {
				cout<<"\nAdded stack is : \n";
				stack<int> x;
				x=s+r;
				x.disp();
		}break;
	/*		case 5: {
				cout<<"\nAdded stack : \n";
				stack<float> x;
				x=p+s;
				x.disp();
		}break;
	*/
		default:exit(0);
		}
}
									
				
	
		
