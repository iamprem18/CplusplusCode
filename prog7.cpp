#include<iostream>

enum shape {
	
	circle = 4,
	rectangle = 5,
	triangle = 6,
};

int main() {

	std::cout<<"Enter shape of code : ";
	int code;
	std::cin>>code;
	while(code >= circle && code <=triangle) {

		switch(code) {
			
			case circle : std::cout<<"In circle";
				      break;	
		
			case rectangle : std::cout<<"In rectangle";
				      	 break;	
			
			case triangle : std::cout<<"In triangle";
				      break;	
		}
		std::cout<<"Enter shape of code : ";
		std::cin>>code;
	}
	return 0;
}
