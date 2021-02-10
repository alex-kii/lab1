#include <iostream> 
#include "task8_func.h"

using namespace std;

extern double x;
extern double result;

void main()
{

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "x: " << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}