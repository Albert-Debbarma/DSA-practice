#include<iostream>
 #include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std ;
int ls (int arr[], int n , int i , int target){
    if(i == n )
    return -1;
    if (arr[i]== target)
    {
        return i;
    }
    
 return ls(arr,n,i+1,target);
    
   
}
int LinearSearch(int array[],int key,int size,int i) {
	//size=size-1;
	if(i==size) {
		return -1;
	} 
    else if(array[i]==key) {
		return i;
	}
     else 
	return	LinearSearch(array,key,size,i+1);
	
}


int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int ar[] = {17, 15, 11, 8, 13, 19};
    int size = sizeof(ar) / sizeof(ar[0]);
    int x = 19;
int ans =ls(ar,size,0,x);
cout<<ans;
return 0 ;
}
