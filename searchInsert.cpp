#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, up = int(nums.size()-1);


    while (low <= up) {
        int mid = low + (up-low)/2;

        if (nums[mid] < target)
            low = mid+1;
        else
            up = mid-1;
    }

    return low;
}

