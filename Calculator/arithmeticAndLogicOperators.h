#ifndef ARITHMETIC_AND_LOGIC_OPERATORS_H
#define ARITHMETIC_AND_LOGIC_OPERATORS_H
namespace calculator {
	int sum(int left, int right);
	int sub(int left, int right);
	int mult(int left, int right);
	int division(int left, int right);
	int mod(int left, int right);
	int unaryPlus(int number);
	int unaryMinus(int number);

	bool negation(bool expression);
	bool conjunction(bool left, bool right);
	bool disjunction(bool left, bool right);
	int exclusiveOr(bool left, bool right);
	int conjuctionNegation(bool left, bool right);
	int disjunctionNegation(bool left, bool right);
}
#endif

