#include <iostream>  

using namespace std; 

void main() 
{

	double x = 25;

	double func = ( sin(4*x)/(1+cos(4*x)) ) * ( cos(2*x)/(1+cos(2*x)) );
	cout << "x= " << x << "; f= " << func << "\n";
	
	cout << "x:" << "\n";
	cin >> x;
	func = (sin(4 * x) / (1 + cos(4 * x))) * (cos(2 * x) / (1 + cos(2 * x)));
	cout << "x= " << x << "; f= " << func;

}