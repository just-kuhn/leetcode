#include <iostream>

using namespace std;

long reverseIntegerPal(int x){
    long result = 0;
    while(x)
    {
        result *= 10;
        int buf = x % 10;
        result += buf;
        x /= 10;
    }
        return result;
}

bool isPalindrome(int x){
    if(x < 0)
        return false;
    else
    {
        return long(x) == reverseIntegerPal(x);
    }
}