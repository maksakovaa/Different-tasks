#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

class Solution
{
public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        std::unordered_set<int> uset;
        for (const auto i : nums)
        {
            uset.insert(i);
        }
        if (nums.size() == uset.size())
        {
            return false;
        }
        return true;        
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