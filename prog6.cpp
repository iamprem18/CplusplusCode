#include<iostream>

class person {
	
	char name[10];
	int age;

	public:
		void getdata();
		void display();
};
void person::getdata() {
	
	std::cout<<"Enter name : ";
	std::cin>>name;
	std::cout<<"Enter age : ";
	std::cin>>age;
}

void person::display() {
	
	std::cout<<"\nName : "<<name;
	std::cout<<"\nAge : "<<age;
}	
int main() {
	
	person p;
	p.getdata();
	p.display();

	return (0);
}
