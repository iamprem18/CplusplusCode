//staatic variable in class:

/*
As the variables deaclared as static are initialized only once as they are allocated space in separate static storage so,the static variables in a class are shared by the objects. There can be multiple copies of same static variables for different objects
*/


/*Here, multiple objects of static variable can't be created and static variable should be initialize explicitly by user using class name and scope resolution operator outside
*/

#include<iostream>

class staticVar{

	public:
		static int num;

	staticVar() {

	};
};
int main() {

	staticVar s;
	staticVar s1;
	s.num = 2;
	s1.num = 3;
	std::cout<<"s : "<<s.num<<std::endl;
	std::cout<<"s1 : "<<s1.num<<std::endl;
}
