class Solution {
public:
    int divide(int dividend, int divisor) {
       
        const int INT_MAX_VAL = INT_MAX;
        const int INT_MIN_VAL = INT_MIN;

      
        if (dividend == INT_MIN_VAL && divisor == -1) {
            return INT_MAX_VAL;
        }

       
        bool negative = (dividend < 0) ^ (divisor < 0);

       
        long long a = labs(dividend);
        long long b = labs(divisor);
        long long quotient = 0;

     
        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            quotient += multiple;
        }

      
        if (negative) quotient = -quotient;

     
        if (quotient > INT_MAX_VAL) return INT_MAX_VAL;
        if (quotient < INT_MIN_VAL) return INT_MIN_VAL;

        return static_cast<int>(quotient);
    }
};
