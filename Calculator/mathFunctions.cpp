#include "mathFunctions.h"

int calculator::absolute(int number)
{
	if (number >= 0) {
		return number;
	}
	else {
		return -number;
	}
}

double calculator::sqrt(double number)
{
	if (number >= 0) {
		return pow(number, 0.5);
	}
	else {
		throw "sqrt of minus number is not definded";
	}

}

double calculator::reciprocalFunction(double number)
{
	return 1/number;
}
