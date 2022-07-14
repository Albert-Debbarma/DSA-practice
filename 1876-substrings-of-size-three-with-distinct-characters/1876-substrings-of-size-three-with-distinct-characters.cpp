class Solution {
public:
    int countGoodSubstrings(string s) {
     int n= s.length();
        int l= 0, r= 0;
        if(n<3)
            return 0;
        int ans = 0;
        
        while(r<n){
           if(r-l+1 < 3) 
             r++;
            else if(r-l+1 == 3){
                if(s[l] != s[l+1] && s[l] != s[l+2] && s[l+1] != s[l+2])
                    ans++;
            r++;
                l++;
            }
        } 
        return ans;
    }
};
 