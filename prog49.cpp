//Base class PRIVATE


//Cannot access private member of class

#include<iostream>

class Base {
	int a =10;		//private declaration
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
			std::cout<<"Child 1 : "<<a<<std::endl;
		}
};
class Child3 : private Base {
	
	public:
		void child_fun() {
			std::cout<<"Child 1 : "<<a<<std::endl;
		}
};

int main() {
	Child1 c1;
	Child2 c2;
	Child3 c3;
	c1.child_fun();	
	c2.child_fun();	
	c3.child_fun();	
	return 0;
}
