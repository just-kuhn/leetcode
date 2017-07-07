//
// Created by uladzislau on 7.7.17.
//

#include <iostream>

using namespace std;

long reverseInteger(int x){
    long result = 0;
    while(x)
    {
        result *= 10;
        int buf = x % 10;
        result += buf;
        x /= 10;
    }
    if(result > INT32_MAX || result < INT32_MIN)
        return 0;
    else
        return result;
}

