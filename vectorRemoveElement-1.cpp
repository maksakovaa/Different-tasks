#include <iostream>
#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        int result = 0;
        for (auto it = nums.begin(); it != nums.end();)
        {
            if (*it != val)
            {
                ++result;
                ++it;
            }
            else
            {
                it = nums.erase(it);
            }
        }
        return result;
    }
};
int main()
{
    Solution solution;
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = solution.removeElement(nums, val);
    return 0;
}