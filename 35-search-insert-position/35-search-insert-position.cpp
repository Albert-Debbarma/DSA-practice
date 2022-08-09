class Solution {
public:
    int searchInsert(vector<int>& A, int B) {
        int s = 0;
    int e = A.size()-1;
    while(s<=e){
        int mid = s +(e-s)/2;
        if(A[mid] == B)
        return mid;
        if(A[mid] > B){
            e = mid - 1;
        }
        else{
            s= mid +1;
        }
    }
    return s;
    }
};