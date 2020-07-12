#include<iostream>

class helloworld {

	public:
		int n;
		helloworld() {
		}
		helloworld(int num) {
			n = num;
		}
		friend void operator-(/*helloworld h*/);
		void prem(helloworld h1);
};
void operator-(/*helloworld h*/) {
	
	h.n = -h.n;
}
void helloworld::prem(helloworld h2) {
	std::cout<<h2.n;
}
int main() {
	
	helloworld h;
	h.prem(10);
}
