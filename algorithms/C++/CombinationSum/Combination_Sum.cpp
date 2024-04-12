#include <iostream>
#include <vector>

class Solution {
public:
    void backtrack(std::vector<std::vector<int>>& result, std::vector<int>& candidates, std::vector<int>& combination, int target, int start) {
        if (target < 0) {
            return;
        } else if (target == 0) {
            result.push_back(combination);
            return;
        } else {
            for (int i = start; i < candidates.size(); ++i) {
                combination.push_back(candidates[i]);
                backtrack(result, candidates, combination, target - candidates[i], i);
                combination.pop_back();
            }
        }
    }

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> combination;
        backtrack(result, candidates, combination, target, 0);
        return result;
    }

    void printCombinations(const std::vector<std::vector<int>>& combinations) {
        for (const auto& combination : combinations) {
            std::cout << "[";
            for (size_t i = 0; i < combination.size(); ++i) {
                std::cout << combination[i];
                if (i < combination.size() - 1) {
                    std::cout << ", ";
                }
            }
            std::cout << "]" << std::endl;
        }
    }
};
