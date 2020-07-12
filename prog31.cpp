//return constructor

#include<iostream>

class returnCons {
	
	public:
		returnCons() {
			return 1;	//error: returning a value from a constructor
		}
};

int main() {
	
	returnCons r;
	return 0;
}
