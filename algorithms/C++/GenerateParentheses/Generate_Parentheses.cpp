#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    void generateParentheses(std::vector<std::string>& result, std::string current, int open, int close, int max) {
        if (current.length() == max * 2) {
            result.push_back(current);
            return;
        }

        if (open < max) {
            generateParentheses(result, current + "(", open + 1, close, max);
        }
        if (close < open) {
            generateParentheses(result, current + ")", open, close + 1, max);
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> result;
        generateParentheses(result, "", 0, 0, n);
        return result;
    }
};
