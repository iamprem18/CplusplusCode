//Accessing class member (public)

#include<iostream>

class employee {
	
	public:
		int id;
		float sal;
		char name[10];
		
		void getData();
		void putData();
};

void employee::getData() {
	
	std::cout<<"Enter the employee name : ";
	std::cin>>employee::name;
	std::cout<<"Enter the employee id : ";
	std::cin>>employee::id;
	std::cout<<"Enter the employee sal : ";
	std::cin>>employee::sal;
}
void employee::putData() {
	
	std::cout<<"Name : "<<employee::name<<std::endl;
	std::cout<<"ID : "<<employee::id<<std::endl;
	std::cout<<"Salary : "<<employee::sal<<std::endl;
}
int main() {
	
	employee e;
	e.getData();
	e.putData();

	return 0;
}
