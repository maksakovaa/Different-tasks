#include <iostream>
#include <vector>
#include <unordered_map>

//Two Sum вернуть индексы элементов сумма которых даст цель
class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::unordered_map<int, int> umap;
        int size = nums.size();
        //2, 7, 11, 15; target = 9
        //9 - 2 = 7
        //3, 2, 4; target = 6
        //6 - 3 = 3
        //3, 3; target 6
        for (int i = 0; i < size; ++i)
        {
            umap[nums[i]] = i;
        }
        for (int i = 0; i < size; ++i)
        {
            int value = target - nums[i];
            if(umap.count(value) && umap[value] != i)
            {
                return {i, umap[value]};
            }
        }
        return {};
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

    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = solution.twoSum(nums2, target2);
    for (auto i : result2)
    {
        std::cout << i << ", ";
    }
    std::cout << '\n';

    std::vector<int> nums3 = {3,3};
    int target3 = 6;
    std::vector<int> result3 = solution.twoSum(nums3, target3);
    for (auto i : result3)
    {
        std::cout << i << ", ";
    }
    std::cout << '\n';
}