//type conversion

#include<iostream>

class Conversion {
	
	public:
		int i = 10.00;
		float f;

};
int main() {
	
	Conversion c;
	c.f = c.i;
	std::cout<<c.f;

}
