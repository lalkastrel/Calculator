#include "digitFunctions.h"

int calculator::bitwiseNot(int number)
{
	return ~number;
}

int calculator::bitwiseAnd(int left, int right)
{
	return left & right;
}

int calculator::bitwiseOr(int left, int right)
{
	return left | right;
}

int calculator::bitwiseExclusiveOr(int left, int right)
{
	return left ^ right;
}

int calculator::bitwiseConjuctionNegation(int left, int right)
{
	return bitwiseNot(bitwiseAnd(left, right));
}

int calculator::bitwiseDisjunctionNegation(int left, int right)
{
	return bitwiseNot(bitwiseOr(left, right));
}

int calculator::leftShift(int number, int shift, bool isLogic)
{
	if (isLogic) {
		return number << shift;
	}
}

int calculator::rightShift(int number, int shift, bool isLogic)
{
	if (isLogic) {
		return number >> shift;
	}
}
