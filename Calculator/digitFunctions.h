#ifndef DIGIT_FUNCTIONS
#define DIGIT_FUNCTIONS
namespace calculator {
	int bitwiseNot(int number);
	int bitwiseAnd(int left, int right);
	int bitwiseOr(int left, int right);
	int bitwiseExclusiveOr(int left, int right);
	int bitwiseConjuctionNegation(int left, int right);
	int	bitwiseDisjunctionNegation(int left, int right);
	int leftShift(int number, int shift, bool isLogic);
	int rightShift(int number, int shift, bool isLogic);
}
#endif // !DIGIT_FUNCTIONS

