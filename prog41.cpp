#include<iostream>

class addOp {
	
	public:
		int operator+();
};
addOp int::operator+() {
	return 0;
}
int main() {
	int a;
	int b;
	int p = a + b;
	std::cout<<p;
	return 0;
}
