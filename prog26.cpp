//Friend Function


#include<iostream>

class secondValue;	//forward declaration

class firstValue {
	
	int x;
	public:
		void setValue(int i) {
			x=i;
		}
		friend void max(firstValue ,secondValue );	
};
class secondValue {

	int a;
	public:	
		void setValue(int i) {
			a=i;
		}
		friend void max(firstValue,secondValue);
};
void max(firstValue f,secondValue s) {

	if(f.x >= s.a)
		std::cout<<"Greater number than other : "<<f.x<<std::endl;
	else
		std::cout<<"Greater number than other : "<<s.a<<std::endl;
}
int main() {

	firstValue fv;
	secondValue sv;
	fv.setValue(300);
	sv.setValue(200);
	max(fv,sv);
	return 0;
}
