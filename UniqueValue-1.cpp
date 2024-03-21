#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
    public:
    int singleNumber(std::vector<int>& nums)
    {
        // brut force O(N^2) O(1)
        // sort O(N*logN) O(1)
        // unordered_map O(N) O(N)

        /*
            key : value
            элемент массива : количество повторений
        */
       std::unordered_map<int, int> umap;
       for(auto i : nums)
       {
            umap[i] += 1;
       }
        for (auto [i, j] : umap)
        {
            if(j == 1)
            {
                return i;
            }
        }

        /*
        for (auto i : umap)
        {
            if (i.second == 1)
            {
                return i.first;
            }
        }
        */
        return -1;
    }
};

// cout Unique symbol


int main(int, char**)
{
    Solution solution;
    std::vector nums = {4,1,2,1,2};
    std::cout << solution.singleNumber(nums) << '\n'; // 4
}