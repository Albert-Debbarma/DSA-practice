///using map tc- O(nlogn) sc--o(n)
int Solution::solve(vector<int> &A) {
    
    
       int n=A.size(),cnt=n;
   
    map<int,int> mp;
    for(int i=0;i<n;i++) mp[A[i]]++;
   
    for(auto it:mp)
    {
        cnt = cnt-it.second;
        if(cnt==it.first) return 1;
    }
    return -1; 
}
-------------------------------------------------
  bf--O(N^2)
  int nobleInteger(int arr[], int size)
{
    for (int i = 0; i < size; i++ )
    {
        int count = 0;
        for (int j = 0; j < size; j++)
            if (arr[i] < arr[j])
                count++;
                 
        // If count of greater elements
        // is equal to arr[i]
        if (count == arr[i])
            return arr[i];
    }
     
    return -1;
  //////////////////////////////////////////////////////////////////////////////////////
  using sorting --tc --O(nlogn)--sc-O(1)
    int nobleInteger(int arr[], int n)
{
    sort(arr, arr + n);
 
    // Return a Noble element if present
    // before last.
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])///if dupliccate just skip it for -- 2555555
            continue;
 
        // In case of duplicates, we
        // reach last occurrence here.
        if (arr[i] == n - i - 1)
            return arr[i];
    }
    if (arr[n - 1] == 0)////when last element is zero
        return arr[n - 1];
    return -1;
}
  
  
  
