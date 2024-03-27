#include <unordered_map>

class Solution {
public:
    int romanToInt(string str) {
        int answ = 0;
        unordered_map<char,int>x;
        x['I']=1;
        x['V']=5;
        x['X']=10;
        x['L']=50;
        x['C']=100;
        x['D']=500;
        x['M']=1000;
        
        for(int i=str.size()-1;i>=0;i--)
        {
            if(answ>x[str[i]] && str[i]!=str[i+1])
            {
                answ-=x[str[i]];
                
            }
            else
            answ+=x[str[i]];
        }
        return answ;
    }
};
