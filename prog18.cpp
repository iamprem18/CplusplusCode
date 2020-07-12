//Shoping list

#include<iostream>

const int SIZE = 50;

class items {

	int itemCode[SIZE];
	float itemPrice[SIZE];
	int count;

	public:
		
		void cnt() {
			count = 0;
		}
		void getItem();
		void displaySum();
		void remove();
		void displayItem();
};

void items::getItem() {
	
	std::cout<<"Enter the item code : ";
	std::cin>>itemCode[count];
	
	std::cout<<"Enter the item prize : ";
	std::cin>>itemPrice[count];
	count++;
}

void items::displaySum() {

	float sum=0;
	for(int i=0;i<count;i++)
		sum +=itemPrice[i];
	std::cout<<"Total Value : "<<sum<<std::endl;
}

void items::remove() {

	int code;
	std::cout<<"\nEnter the code : "<<std::endl;
	std::cin>>code;

	for(int i=0;i<count;i++) {
		if(itemCode[i]==code)
			itemPrice[i]=0;
	}
}
void items::displayItem() {

	for(int i=0;i<count;i++) {
		std::cout<<"\n"<<itemCode[i];
		std::cout<<"	"<<itemPrice[i];
	}
	std::cout<<"\n";
}
int main() {
	
	items order;
	order.cnt();
	int x;
	do {
	
		std::cout<<"--------INDEX---------\n";
		std::cout<<"1.)ADD an Item "<<std::endl;
		std::cout<<"2.)Display total value "<<std::endl;
		std::cout<<"3.)Delete an Item "<<std::endl;
		std::cout<<"4.)Display all Items "<<std::endl;
		std::cout<<"5.)Quit "<<std::endl;
		std::cout<<"Enter your choice : ";
		std::cin>>x;

		switch(x) {
			
			case 1: order.getItem();
				break;
			case 2:	order.displaySum();
				break;
			case 3:	order.remove();
				break;
			case 4:	order.displayItem();
				break;
			case 5: break;

			default : std::cout<<"Wrong Choice!!\n";
		}
	}while(x!=5);
	
	return 0;
}
