//A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class

#include<iostream>

class base {

	public:
		virtual void print() {
			
			std::cout<<"Print in base class"<<std::endl;
		}
		void show() {
			std::cout<<"Show in base"<<std::endl;
		}
};
class child : public base {
	
	public:
		void print() {
			
			std::cout<<"Print in child class"<<std::endl;
		}
		void show() {
			std::cout<<"Show in child"<<std::endl;
		}
};
int main() {
	
	base *ptr;
	child c;
	ptr = &c;
	ptr->print();
	ptr->show();

	return 0;
}
