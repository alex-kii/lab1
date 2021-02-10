#include <iostream> 
#include "func.h"

using namespace std;

void main()
{

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "x:" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}