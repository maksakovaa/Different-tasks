#include <iostream>
#include <string>
#include <vector>

class Solution
{
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        size_t size = nums.size();
        for (size_t i = 0; i < size; ++i)
        {
            for (size_t j = i + 1; j < size; ++j)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
                
            }
        }
        return false;
    }
};

int main()
{
    Solution s;
    //1, 2, 3, 1
    std::vector<int> nums1 = {1,2,3,1};
    std::cout << s.containsDuplicate(nums1) << '\n';
    //1, 2, 3, 4
    std::vector<int> nums2 = {1, 2, 3, 4};
    std::cout << s.containsDuplicate(nums2) << '\n';   
    //1, 1, 1, 3, 3, 4, 3, 2, 4, 2
    std::vector<int> nums3 = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    std::cout << s.containsDuplicate(nums3) << '\n';
}