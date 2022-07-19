class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      vector<int>sorted(nums.begin(),nums.end());
        sort(sorted.begin(),sorted.end());
        int n = nums.size();
        int s = 0;
        int e = n-1;
        while( s < n && nums[s]==sorted[s]){
            s++;
        }
        while( e > s && nums[e]==sorted[e]){
            e--;
        }
        return e+1-s;
    }
};