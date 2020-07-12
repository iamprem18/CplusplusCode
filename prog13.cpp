#include<iostream>

class employee {

	char name[10];
	int empId;
	float sal;

	public:
		void data(char name[],int,float);
	
};
void employee::data(char name[],int id, float sal) {
	
	std::cout<<"Name : "<<name<<std::endl;
	std::cout<<"Emp-Id : "<<id<<std::endl;
	std::cout<<"Salary : "<<sal<<std::endl;
}

int main() {

	employee e;
	e.data("Prem",101,50000.00);			
}
