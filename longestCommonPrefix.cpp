#include <iostream>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    string prefix="";
    for(int i = 0; strs.size() > 0; prefix += strs[0][i], i++)
        for(int j = 0; j < strs.size(); j++)
            if(i >= strs[j].size() || (j > 0 && strs[j][i] != strs[j-1][i]))
                return prefix;
    return prefix;
}
