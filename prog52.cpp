//pointer to objects

#include<iostream>

class item {

	int code;
	float price;

	public:
		void getdata(int a,float b) {
			
			code = a;
			price = b;
		}
		void show() {
			std::cout<<"Code : "<<code<<std::endl;
			std::cout<<"Price : "<<price<<std::endl;
		}
};

const int size = 2;
int main() {
	
	item *ptr = new item [size];
	item *d = ptr;
	int x;
	float y;

	for(int i=0;i<2;i++) {
		
		std::cout<<"ENter the code : ";
		std::cin>>x;
		std::cout<<"Enter the Price : ";
		std::cin>>y;
		ptr->getdata(x,y);
		ptr++;
	}
	for(int i=0;i<2;i++) {
		std::cout<<"Item : "<<i+1<<"\n";
		d->show();
		d++;
	}
	return 0;
}
