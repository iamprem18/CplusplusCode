//constructor

#include<iostream>

class constructor {

	public: 
		constructor() {
			std::cout<<"The default construct";
		}
};
int main() {
	
	constructor c;
	return 0;
}
