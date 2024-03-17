#include <iostream>
#include <vector>

//Two Sum вернуть индексы элементов сумма которых даст цель
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        int size = nums.size();
        for (int i = 0; i < size -1; ++i)
        {
            for (int j = i + 1; j < size; ++j)
            {
                if ((nums[i]+nums[j]) == target)
                {
                    return {i, j};
                }
            }
        }
        return{};
    }
};

int main()
{
    Solution solution;
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    std::vector<int> result = solution.twoSum(nums, target);
    for (auto i : result)
    {
        std::cout << i << ", ";
    }
    std::cout << '\n';
}