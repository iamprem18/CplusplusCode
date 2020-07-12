#include<iostream>

class PrivateFriend {

	
	friend void fun();
	public:
		int a=10;
};
PrivateFriend void::fun() {			//wasn't declare in scope
	std::cout<<"In fun"<<std::endl;
}
int main() {
	
	fun();
}
