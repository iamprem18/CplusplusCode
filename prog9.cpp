//To define function outside class
#include<iostream>

class scope {
	
	public :
		void fun();
};

void scope::fun() {
	
	std::cout<<"In Fun"<<std::endl;
}
int main() {

	scope s;
	s.fun();
}
