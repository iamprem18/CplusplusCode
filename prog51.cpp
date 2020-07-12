//Multilevel inheritance

#include<iostream>

class student {
	
	protected:
		int roll;
	public:	
		void getNumber(int);
		void putNumber(void);
};
void student::getNumber(int a) {

	roll = a;
}
void student::putNumber() {

	std::cout<<"Roll Number : "<<roll<<std::endl;
}

class Test : public student {
	
	public:
		int sub1;
		int sub2;
		void getMarks(int,int);
		void putMarks(void);
};
void Test::getMarks(int x,int y) {
	
	sub1 = x;
	sub2 = y;
}
void Test::putMarks() {
	std::cout<<"Subject 1 : "<<sub1<<std::endl;
	std::cout<<"Subject 2 : "<<sub2<<std::endl;
}

class result : public Test {
	
	public:
		int total = 0 ;
		void totalResult() {
			total = sub1 + sub2;
			std::cout<<"Total : "<<total<<std::endl;
		}
};
int main() {

	student s;
	s.getNumber(100);
	s.putNumber();

	Test t;
	t.getMarks(100,200);
	t.putMarks();

	result r;
	r.totalResult();

	return 0;
}
