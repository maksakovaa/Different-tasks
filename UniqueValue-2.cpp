#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
    public:
    int singleNumber(std::vector<int>& nums)
    {
        // XOR
        // A^A = 0
        // A^B^A = B
        int result = 0;
        for (auto i : nums)
        {
            result ^=i;
        }
        return result;
    }
};

// cout Unique symbol


int main(int, char**)
{
    Solution solution;
    std::vector nums = {4,1,2,1,2};
    std::cout << solution.singleNumber(nums) << '\n'; // 4
}