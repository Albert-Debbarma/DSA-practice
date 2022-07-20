//Given an array arr[], find the maximum j – i such that arr[j] > arr[i].

//brute force-- TC _O(N^2)
#include <bits/stdc++.h>
using namespace std;
  

int maxIndexDiff(int arr[], int n)
{
    int maxDiff = -1;
    int i, j;
  
    for (i = 0; i < n; ++i) {
        for (j = n - 1; j > i; --j) {
            if (arr[j] > arr[i] && maxDiff < (j - i))
                maxDiff = j - i;
        }
    }
  
    return maxDiff;
}
  
int main()
{
    int arr[] = { 9, 2, 3, 4, 5, 6, 7, 8, 18, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxDiff = maxIndexDiff(arr, n);
    cout << "\n" << maxDiff;
    return 0;
}

//optimise
int maxIndexDiff(int arr[], int n)
{
    int leftMin[n] ;
    leftMin[0] = arr[0];
    for(int i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], arr[i]);
  
  
    //leftMin[i] = min{ arr[0...i] }
  
  
    int maxDist = INT_MIN;
    int i = n-1, j = n-1;
  
    while(i>=0  &&  j>=0)
    {
        if(arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j-i);
            i--;
        }
        else 
            j--;
    }
  
    return maxDist;
  
          
}
  
