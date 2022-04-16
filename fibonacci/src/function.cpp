#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    vector<unsigned int> v;

    unsigned int number;
    int index = 0;
    bool fibBelowN = true;

    while (fibBelowN)
    {
        if (index == 0 || index == 1)
        {
            if (n > 1) v.push_back(1);
            else return v;
        }
        else
        {
            number = v[index - 1] + v[index - 2];
            if (number < n) v.push_back(number);
            else fibBelowN = false;
        }
        index++;
    }

    return v;

}
