//static variable of class initialize explicitly

#include<iostream>

class staticOutside {

	public:
		static int num;
	staticOutside() {
	
	}
};
int staticOutside::num = 1;


int main() {
	
	staticOutside s;
	s.num++;
	std::cout<<s.num;
}
