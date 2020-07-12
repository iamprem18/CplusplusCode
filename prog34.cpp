//try n error

#include<iostream>

class room {
	
	int length;
	int width;

	public : 
		room(int l,int w=0) {
			
			width = w;
			length = l;
		}
};

int main() {
	
	room obj1;		//error : no matching fucntion found
	room obj2(12,8);
}
