/* Question Link:- https://www.hackerrank.com/challenges/30-interfaces/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic
{
public:
    virtual int divisorSum(int n) = 0;
};
class Calculator : public AdvancedArithmetic
{
public:
    int divisorSum(int n)
    {
        int result = 0;
        if (n == 1) // there will be no proper divisor
            return n;
        // find all divisors which divides 'num'
        for (int i = 1; i <= sqrt(n); i++)
        {
            // if 'i' is divisor of 'num'
            if (n % i == 0)
            {
                // if both divisors are same then add
                // it only once else add both
                if (i == (n / i))
                    result += i;
                else
                    result += (i + n / i);
            }
        }

        // Add 1 to the result as 1 is also a divisor
        return result;
    }
};

int main()
{
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n"
         << sum;
    return 0;
}