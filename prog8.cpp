//To access global variable where local variable with same name

#include<iostream>

int x = 10;

int main() {

	int x = 20;
	std::cout<<"Local Variable : "<<x<<std::endl;
	std::cout<<"Global Variable : "<<::x<<std::endl;

	return 0;
}
