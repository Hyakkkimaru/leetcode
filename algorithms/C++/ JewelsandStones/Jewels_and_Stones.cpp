class Solution {
public:
  int numJewelsInStones(std::string jewels, std::string stones) {
      int count = 0;
      for(int i=0; i<stones.length(); i++){
          for(int j=0; j<jewels.length(); j++){
              if(stones[i] == jewels[j]){
                  count++;
              }
          }
      }
  
      return count;
  }
};
