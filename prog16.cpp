//Accessing member of class (private)

#include<iostream>

class employee {
	
	private:
		int userid;
		int password;
		
		void credential();
};

void employee::credential() {
	
	std::cout<<"User id : "<<employee::userid<<std::endl;
	std::cout<<"Password : "<<employee::password<<std::endl;
}
int main() {
	
	employee e;
	e.credential();

	return 0;
}

//"Private member cannot be access outside the class"

/*
prog16.cpp: In function ‘int main()’:
prog16.cpp:20:15: error: ‘void employee::credential()’ is private within this context
  e.credential();
               ^
prog16.cpp:12:6: note: declared private here
 void employee::credential() {
      ^~~~~~~~
*/
