//Public bas class inherited

#include<iostream>

class Parent {
	
	int a = 10;
	public :
		int b = 20;
		void fun() {
			std::cout<<"In Function Parent"<<std::endl;
		}
};
class Child : public Parent {
	
	public:
		void gun() {
			std::cout<<"In gun Child"<<std::endl;
			std::cout<<"b = "<<b<<std::endl;
			//std::cout<<"a = "<<a<<std::endl;		error : declare private within the scope(cant access private mem. of base class)
			fun();
		}
};
int main() {
	
	Child c;
	c.gun();
	return 0;
}
