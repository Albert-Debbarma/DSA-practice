class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        
        int minLen = INT_MAX;
        for (int i = 0; i < nums.size(); i++){
            int sum = 0;
            for (int j = i; j < nums.size(); j++) {
                sum += nums[j];
                if (sum >= s){
                    minLen = min(minLen, j - i + 1);
                    break;  // we can't find a shorter subarray that starts at i
                }
            }
        }
        
        return minLen == INT_MAX ? 0 : minLen;
    }
};
  TC---O(N*N)
    SC--O(1)
