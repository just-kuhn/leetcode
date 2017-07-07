#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int count = 0;
    if(nums.size() == 0)
        return 0;
    else
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
                count++;
            else
                nums[i - count] = nums[i];
        }
    }
    return (int) nums.size() - count;
}

