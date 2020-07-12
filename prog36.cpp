//operator +  overloading

#include<iostream>

class complexx {

	float x;
	float y;
	public:
		complexx() {

		}
		complexx(float real,float img) {
			
			x = real;
			y = img;
		}	
		complexx operator+(complexx);
		void display();
};
complexx complexx::operator+(complexx c) {
	
	complexx temp;
	temp.x = x +c.x;
	temp.y = y +c.y;
	return temp;
}
void complexx::display() {
	
	std::cout<<x<<" + "<<y<<"i"<<std::endl;
}
int main() {
	
	complexx c1,c2,c3;
	c1 = complexx(2.5,3.3);
	c2 = complexx(1.5,2.3);
	c3 = c1 + c2;		//operator+() function invokes

	c3.display();
	return 0;
}
