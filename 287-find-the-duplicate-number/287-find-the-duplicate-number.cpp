class Solution {
public:
    int findDuplicate(vector<int>& arr) {
       int i = 0;
        while (i < arr.size()) {

            if (arr[i] != i + 1) {
                int correct = arr[i] - 1;
                if (arr[i] != arr[correct]) {
                    swap(arr[i], arr [correct]);
                } else {
                    return arr[i];
                }
            } else {
                i++;
            }
        }
        return -1;
    } 
    
};