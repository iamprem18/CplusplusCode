//visiblity of member

#include<iostream>

class baseParent {
	
	int a = 10;
	protected :
		int c = 30;
		void gun() {
			std::cout<<"In gun base"<<std::endl;
		}
	public:
		int b = 20;
		void fun() {
			std::cout<<"In fun base"<<std::endl;
		}
};
class privateChild : private baseParent {
	
	public:
		void inprivateC() {
			gun();
			std::cout<<"In private(protc) child : "<<c<<std::endl;
			fun();
			std::cout<<"In private(public) child : "<<b<<std::endl;
		}	
};
int main() {
	
	privateChild p;
	p.inprivateC();

	return 0;
}
