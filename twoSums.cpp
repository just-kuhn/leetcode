#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<int> nums, int target)
{
    std::unordered_map<int, int> pairs;
    std::vector<int> res;

    for(int i=0; i < nums.size(); i++)
    {
        int targetPair = target - nums[i];

        if(pairs.find(targetPair) != pairs.end())
        {
            res.push_back(pairs[targetPair]);
            res.push_back(i);
            return res;
        }

        pairs[nums[i]] = i;
    }
    return res;
}

