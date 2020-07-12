//destructor 

#include<iostream>

class destructor {
	
	public:
	destructor() {
		std::cout<<"In Constructor"<<std::endl;
	}
	~destructor() {
		std::cout<<"In destructor"<<std::endl;
	}
};

int main() {
	
	destructor d;
	std::cout<<"In main"<<std::endl;
	return 0;
}
