
#include <math.h>

double x=25, result=0;

void f(void) {
	result = (sin(4 * x) / (1 + cos(4 * x)))* (cos(2 * x) / (1 + cos(2 * x)));
}