#include <iostream> 

using namespace std;

extern double x;
extern double result;
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