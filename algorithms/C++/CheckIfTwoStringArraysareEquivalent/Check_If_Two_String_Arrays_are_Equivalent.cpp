class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string st1; 
        string st2;

        for (int i = 0; i < word1.size(); i++) {
            st1 = st1 + word1[i];
        }

        for (int j = 0; j < word2.size(); j++) {
            st2 = st2 + word2[j];
        }

        if (st1 == st2) { return true; }
        else { return false; }
    }
};
