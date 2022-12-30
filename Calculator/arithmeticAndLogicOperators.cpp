#include "arithmeticAndLogicOperators.h"

int calculator::sum(int left, int right)
{
	return left+right;
}

int calculator::sub(int left, int right)
{
	return left-right;
}

int calculator::mult(int left, int right)
{
	return left*right;
}

int calculator::division(int left, int right)
{
	if (right == 0) {
		throw "division can't be with 0";
	}
	return left/right;
}

int calculator::mod(int left, int right)
{
	return left % right;
}

int calculator::unaryPlus(int number)
{
	return number;
}

int calculator::unaryMinus(int number)
{
	return -number;
}

bool calculator::negation(bool expression)
{
	if (expression == true) {
		return false;
	}
	else {
		return true;
	}
}

bool calculator::conjunction(bool left, bool right)
{
	if (left == true && right == true) {
		return true;
	}
	else {
		return false;
	}
}

bool calculator::disjunction(bool left, bool right)
{
	if (left == false && right == false) {
		return false;
	}
	else {
		return true;
	}
}

int calculator::exclusiveOr(bool left, bool right)
{
	if (left == true && right == true) {
		return false;
	}
	if (left != true && right != true) {
		return false;
	}
	return true;
}
