//ip / op overloading


#include<iostream>
using namespace std;
class myInputOutput {

	public:
		int num1;
		int num2;
	
		myInputOutput(int n1,int n2) {
			
			num1 = n1;
			num2 = n2;
		}
		myInputOutput() { }
		//myInputOutput operator + (myInputOutput );
		friend istream & operator >> (istream &, myInputOutput &);
		friend ostream & operator << (ostream &, myInputOutput &);
};
myInputOutput operator+(myInputOutput obj1,myInputOutput obj2) {		//not a member function
	
	myInputOutput m1;
	m1.num1 = obj1.num1 + obj2.num1;
	m1.num2 = obj1.num2 + obj2.num2;
	return m1;
}
istream & operator >> (istream& in,myInputOutput&i) {
	
	in>>i.num1>>i.num2;
	return in;
}
ostream & operator << (ostream& out,myInputOutput&o) {
	
	out<<"Num1 : "<<o.num1<<"\n"<<"Num2 : "<<o.num2<<"\n";
	return out;
}
int main() {

	myInputOutput m1,m2,m3;
	cin>>m1;
	cin>>m2;
	m3 = m1+m2;
	cout<<m3;

	return 0;
}
