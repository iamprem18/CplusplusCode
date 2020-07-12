//Runtime polymorphism


#include<iostream>

class media {
	
	protected:
		char title[50];
		float price;
	public:	
		media(char *s,float a) {
			
			strcpy(title,s);
			price = a;
		}
		virtual void display(){ }
};

class book: public media {

	int pages;
	public:
		book(char *s,float a,int p) :  media(s,a) {
			pages = p;
		}
		void display();
};
class tape : public media {
	
	float time;
	public:
		tape(char *s,float a,float t):media(s,a) {
			time = t;
		}
		void display();
};
void book::display() {
	
	std::cout<<"\nTitle : "<<title<<std::endl;
	std::cout<<"Pages : "<<pages<<std::endl;
	std::cout<<"Price : "<<price<<std::endl;
}
void tape::display() {
	
	std::cout<<"\nTitle : "<<title<<std::endl;
	std::cout<<"Play Time : "<<time<<std::endl;
	std::cout<<"Price : "<<price<<std::endl;
}
int main() {
	
	char *title = new char[30];
	float price,time;
	return 0;
}
