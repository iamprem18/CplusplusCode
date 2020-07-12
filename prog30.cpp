//constructor cant be private


#include<iostream>

class privateCons {

	private:
		privateCons() {			//error : declared private
			std::cout<<"In private Scope";
		}
};
int main() {
	
	privateCons p;
	return 0;
}
/*
prog30.cpp: In function ‘int main()’:
prog30.cpp:15:14: error: ‘privateCons::privateCons()’ is private within this context
  privateCons p;
              ^
prog30.cpp:9:3: note: declared private here
   privateCons() {
   ^~~~~~~~~~~

*/
