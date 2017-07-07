#include <iostream>
#include <unordered_map>

using namespace std;

int romanToInt(string s){
    unordered_map<char, int> accord = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
    };
    int value = accord[s.back()];
    for(int i = int(s.length() - 2); i >= 0; --i)
    {
        if(accord[s[i]] < accord[s[i+1]])
            value -= accord[s[i]];
        else
            value += accord[s[i]];
    }
    return value;
}
