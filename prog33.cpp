//constructor and destructor


#include<iostream>

int count = 0;

class alpha {
	
	public:
		alpha() {
			count++;
			std::cout<<"Object number created : "<<count<<std::endl;
		}
		~alpha() {
			std::cout<<"Object number destroyed: "<<count<<std::endl;
			count--;
		}
};

int main() {
	
	std::cout<<"\n---Main---\n";
	alpha a1,a2,a3,a4;
	{
		std::cout<<"Enter in block 1 :"<<std::endl; 
		const alpha a5;
	}
	{
		std::cout<<"Enter in block 2 :"<<std::endl; 
		alpha a6;
	}
	std::cout<<"\nIn Main\n";
	return 0;
}
