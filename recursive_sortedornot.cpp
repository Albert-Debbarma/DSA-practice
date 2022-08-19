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
#define ar array
#define ll long long
#define ld long double

bool sorted(int arr[], int n, int i){
if(n == 1 || n ==0 || i==n)
return true;
if(arr[i]>=arr[i-1]){
return sorted(arr,n,i+1);
}
else{
 return false;   
}

}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
int a[]={20,45,460,78,90,99};
int size = sizeof(a)/sizeof(a[0]);
bool ans = sorted(a,size,1);
if(ans==true)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
return 0 ;
}
