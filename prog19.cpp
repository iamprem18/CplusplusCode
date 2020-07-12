//static data variable in a function:
/*
When a variable is declared as static, space for it gets allocated forthe lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of variable in the previous call gets carried through the next functioncall.
*/

#include<iostream>

class item {

	public:
	void demo() {
		
		static int count = 0;
		std::cout<<count<<std::endl;
		count++;
	}
};
int main() {

	item i1,i2;
	for(int i=0;i<5;i++) {
		i1.demo();
	}
	for(int i=0;i<5;i++) {
		i2.demo();
	}
}
