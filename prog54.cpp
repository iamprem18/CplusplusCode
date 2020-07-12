//virutal fubction

#include<iostream>

class base {
	
	public:
		virtual void fun() {
			std::cout<<"Hello in base"<<std::endl;
		}
};
class child : public base {
	
	public:
		void fun() {
			std::cout<<"Hello in child"<<std::endl;
		}
};
int main() {
	
	base *ptr,b;
	base *ptrb;
	child c;
	ptr = &c;	//assign child address
	ptrb = &b;	//assign base address
	ptr->fun();
	ptrb->fun();

	return 0;
}
