class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    long long A = abs((long long)dividend);
    long long B = abs((long long)divisor);

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    long long quotient = 0;

    for (int i = 31; i >= 0; --i) {
        if ((A >= (B << i))) {
            A -= (B << i);
            quotient |= (1LL << i);
        }
    }

    return sign * quotient;
}
};