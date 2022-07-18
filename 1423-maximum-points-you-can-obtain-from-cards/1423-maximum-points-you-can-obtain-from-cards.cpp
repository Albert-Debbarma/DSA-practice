class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int n = cardPoints.size(),  sum = 0,ans =0;
       
        for(int i = n-k ; i<n ; i++) sum += cardPoints[i];
           
        
         
        for(int i = 0,ans = sum; i<k ; i++){
            ans -= cardPoints[n-k+i];
            ans += cardPoints[i];
           sum = max(ans,sum);
        }
        return sum;
    }
};