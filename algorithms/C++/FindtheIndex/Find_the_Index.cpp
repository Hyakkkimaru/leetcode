#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        if (needle.empty()) {
            return 0;
        }

        for (int i = 0; i <= static_cast<int>(haystack.length()) - static_cast<int>(needle.length()); ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
