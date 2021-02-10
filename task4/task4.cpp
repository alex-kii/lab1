#include <iostream> 

using namespace std;

double x=25, result=0;

void f(void);

void main()
{

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "x:" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}

void f(void) {
	result = (sin(4 * x) / (1 + cos(4 * x)))* (cos(2 * x) / (1 + cos(2 * x)));
}