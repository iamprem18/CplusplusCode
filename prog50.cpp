//Base class PROTECTED

#include<iostream>

class Base {
	protected:
		int a =10;		//protected declaration
};
class Child1 : public Base {
	
	public:
		void child_fun() {
			std::cout<<"Child 1 : "<<a<<std::endl;
		}
};
class Child2 : protected Base {

	public:
		void child_fun() {
			std::cout<<"Child 2 : "<<a<<std::endl;
		}
};
class Child3 : private Base {
	
	public:
		void child_fun() {
			std::cout<<"Child 3 : "<<a<<std::endl;
		}
};
class Child4 : {
	
	public:
		void fun() {
			Base b;
			std::cout<<"In Child4 : "<<b.a;	//error
		}
};

int main() {
	Child1 c1;
	Child2 c2;
	Child3 c3;
	Child4 c4;

	c4.fun();
	c1.child_fun();	
	c2.child_fun();	
	c3.child_fun();	
	return 0;
}
