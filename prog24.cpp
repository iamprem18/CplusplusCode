//object as argument

#include<iostream>

class Time {

	int hours;
	int minutes;

	public:
		void gettime(int h,int m) {
			
			hours = h;
			minutes = m;
		}
		void puttime() {
			
			std::cout<<hours<<"hours : and "<<minutes<<" min"<<std::endl;
		}
		void sum(Time ,Time );
};

void Time::sum(Time t1,Time t2) {

	minutes = t1.minutes + t2.minutes;
	hours = minutes/60;
	minutes = minutes%60;
	hours = hours + t1.hours + t2.hours;
}

int main() {
	
	
	Time t1,t2,t3;

	t1.gettime(2,35);
	t2.gettime(3,30);

	t3.sum(t1,t2);

	std::cout<<"T1 = ";
	t1.puttime();
	
	std::cout<<"T2 = ";
	t2.puttime();
	
	std::cout<<"T3 = ";
	t3.puttime();
	
	return 0;
}

