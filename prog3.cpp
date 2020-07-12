//Default Parameter : if only one argumen is passsed it takes default value of b  else it takes the value while calling it

#include<iostream>

int add(int a,int b=10) {
	
	return a+b;
}
int main() {

	std::cout<<add(10,5)<<std::endl;
}
