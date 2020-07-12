#include<iostream>

class employee {
	
	public:
		void fun();
		void gun() {
			std::cout<<"In gun"<<std::endl;
		}

};

class client {

	public:
		void fun();
};

void employee::fun() {
	std::cout<<"In employee fun"<<std::endl;
	gun();
}
void client::fun() {
	std::cout<<"In client fun"<<std::endl;
}
int main() {
	employee e;
	e.fun();
	client c;
	c.fun();
}
