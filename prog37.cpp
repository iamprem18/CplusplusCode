#include<iostream.h>

const size = 3;
class vector {

	int v[size];
	public:
		vector();
		vector(int *x);
		friend vector operator*(int a,vector b);
		friend vector operator*(vector b,int a);
		friend istream & operator >> (istream &, vector &);
		friend ostream & operator >> (istream &, vector &);
