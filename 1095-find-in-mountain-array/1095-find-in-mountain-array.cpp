/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int B, MountainArray &A) {
      
        
        int low = 0, high = A.length()-1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (A.get(mid) < A.get(mid+1 ))
                low = mid+1;
            else
                high = mid;
        }
       int peak = low;
       int l = 0; int r = peak; 
       while (l <= r) {
            int mid = l + (r - l) / 2;
            if (A.get(mid) == B)
                return mid;
           else if (A.get(mid) > B)
                r = mid-1;
         else
                l = mid +1;
        }
    

        l= peak;  r = A.length()-1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (A.get(mid) == B)
                return mid;
          else if (A.get(mid)> B)
                l = mid+1;
        else
     r = mid-1;
        }
    return -1;
    }
};