#include <unordered_map>
#include <iostream>
#include <string>
#include <vector>
#include <memory>

//standard leetcode formatted Answer

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        
        for (int i = 0; i < nums.size(); ++i) {
            int comple = target - nums[i];
            if (num_map.find(comple) != num_map.end()) {
                return {num_map[comple], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};

// EXAMPLES and RESULT


int main() {
    Solution solved;

    //Standard Example
    {
        std::vector<int> nums = {2, 7, 11, 15};
        int target = 9;

        std::cout << "Standard Result: ";
        for (int idx : solved.twoSum(nums, target)) std::cout << idx << " ";
        std::cout << "\n";
    }

    //Custom Example
    {
        std::vector<int> nums = {3, 46, 4, 2, 12, 2, 32};
        int target = 50;

        std::cout << "Custom Result: ";
        for (int idx : solved.twoSum(nums, target)) std::cout << idx << " ";
        std::cout << "\n";
    }
    return 0;
}