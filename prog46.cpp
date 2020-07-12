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
class Child : private Parent {
	
	public:
		void gun() {
			std::cout<<"In gun Child"<<std::endl;
			std::cout<<"b = "<<b<<std::endl;
			fun();
		}
};
class grandChild : public Child {

	public:
		void run() {
			gun();
			std::cout<<"In run grandChild"<<std::endl;
			std::cout<<"b = "<<b<<std::endl;		//inaccessible b'coz "Parent" is privately inherited 
		}
};
int main() {
	
	grandChild c;
	c.run();
	return 0;
}
