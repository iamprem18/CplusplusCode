//return object form a function


#include<iostream>

class complexNo {
	

	float x,y;
	public :
		void input(float real,float img) {
			x = real;
			y = img;
		}
		friend complexNo sum(complexNo , complexNo);
		void show(complexNo );
};
complexNo sum(complexNo cmp1,complexNo cmp2) {

	complexNo cmp3;
	cmp3.x = cmp1.x + cmp2.x;
	cmp3.y = cmp1.y + cmp2.y;

	return cmp3;
}

void complexNo::show(complexNo c) {
	std::cout<<c.x<<" + "<<c.y<<"i"<<std::endl;
}
int main() {
	
	complexNo c1,c2;
	c1.input(3.1,5.55);
	c2.input(4.2,5.65);
	int c3 = sum(c1,c2);	//error : cannot convert 'complexNo' to 'int'
	c3.show(c3);
	return 0;
}	
