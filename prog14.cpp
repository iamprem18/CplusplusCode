#include<iostream>

class employee {
	
	public:	
		employee() {
			std::cout<<"In Default constructor"<<std::endl;
		}
		employee(int x) {
			std::cout<<"In Para constructor"<<std::endl;
		}
		employee(const employee &){
			std::cout<<"In copy constructor"<<std::endl;
		}
};
int main() {
	employee e;
	employee e1(10);
	employee *e2 = new employee(e);
}
