//Binary operator

#include<iostream>

class addOp {

	public:	
		int num;
		addOp() {

		}
		addOp(int n) {
			num = n;
		}
		addOp operator+(addOp obj); 
};
addOp addOp::operator+(addOp a) {
	
	addOp ad;
	ad.num = this->num + a.num;
	return ad;
}
int main() {
	
	addOp add1(10),add2(20);
	
	addOp add3 = add1 + add2;
	std::cout<<add3.num;
}
