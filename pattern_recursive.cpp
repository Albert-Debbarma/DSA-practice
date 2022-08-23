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
void print (int row,int col){
    if(row == 0)
    return;
    if(col < row ){
      cout<<" * ";
      print(row,col+1);  
    }
    else{
        cout<<endl;
         print(row-1,0);  
    }
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
print(4,0);
return 0 ;
}
