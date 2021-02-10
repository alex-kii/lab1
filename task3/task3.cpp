#include <iostream> 

using namespace std;

double f(double x);

void main()
{

	double x = 25;

	cout << "x= " << x << "; f= " << f(x) << "\n";

	cout << "x:" << "\n";
	cin >> x;
	cout << "x= " << x  << "; f= " << f(x);

}

double f(double x) {
	return (sin(4 * x) / (1 + cos(4 * x))) * (cos(2 * x) / (1 + cos(2 * x)));
}