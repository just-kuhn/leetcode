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

int main() {
    vector<int> numbers;
    vector<int> result;
    numbers.push_back(5);
    numbers.push_back(2);
    numbers.push_back(8);
    numbers.push_back(11);
    for (int i = 0; i < numbers.size(); i++)
        cout << numbers[i] << " ";
    int target = 19;
    result = solution(numbers, target);
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}