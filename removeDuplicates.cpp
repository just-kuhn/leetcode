#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int count = 0;
    if(nums.size() == 0)
        return 0;
    else{
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i - 1])
                count++;
            else
                nums[i-count] = nums[i];
        }
    }
    return (int) (nums.size() - count);
}