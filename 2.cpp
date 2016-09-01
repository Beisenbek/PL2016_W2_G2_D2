/*
You are given 4 integer numbers A, B, C and H, 
the sides of base of pyramid and the height. Find the 
volume of the pyramid using the following formula.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a,b,c,h;
	cin >> a >> b >> c >> h;

	double v,s,p;

	p = (a + b + c) / 2.0; 

	s = sqrt(p*(p-a)*(p-b)*(p-c));

	v = (s * h) / 3;

	cout << v << endl;

	printf("%.2f %.2f %.2f",s,v,2*s);

	return 0;
}
