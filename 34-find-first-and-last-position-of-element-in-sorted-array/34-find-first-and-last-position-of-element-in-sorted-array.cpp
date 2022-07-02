class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        //int mid;
        int first_occurence = -1;
        int last_occurence = -1;
        vector<int>ans;
        while(start<= end){
           int  mid = start + (end -start)/2;
            if(nums [mid]== target){
                first_occurence = mid;
                end = mid -1;
            }
            if(nums[mid] > target){
                end =  mid - 1 ;
            }
    else if(nums [mid] < target){
        start = mid + 1;
    }
        }
          start = 0;
         end = nums.size()-1;
        while(start<= end){
           int  mid = start + (end -start)/2;
            if(nums [mid]== target){
                last_occurence = mid;
                start = mid  + 1;
            }
            if(nums[mid] > target){
                end =  mid - 1 ;
            }
    else if(nums [mid] < target){
        start = mid + 1;
    }
        }
        ans.push_back(first_occurence);
        ans.push_back(last_occurence);
        return ans;
        
        
        
        }
};