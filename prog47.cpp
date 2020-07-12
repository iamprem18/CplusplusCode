//protected member


#include<iostream>

class ritviz {

	protected:
		void uddGaye() {
			std::cout<<"Hum tho udd gaye jab tum juke"<<std::endl;
		}
};

class AllIndiaBakchod : public ritviz {
	
	public:
		void myAccess() {
			std::cout<<"In AIB : ";
			uddGaye();
		}
	
};

class TanmayBhatt : public AllIndiaBakchod {
	
	public: 
		void myAcc() {
			std::cout<<"In Tanmay Bhatt : "; 
			uddGaye();
		}
};
int main() {

	//Allowed
	AllIndiaBakchod aib;
	aib.myAccess();

	TanmayBhatt bot;
	bot.myAcc();


}
