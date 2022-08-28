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
void subsequnce(string p , string up){
    if(up.empty()){
        cout<<p<<endl;
        return;
    }
    subsequnce(p+up[0],up.substr(1));
     subsequnce(p,up.substr(1));
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
subsequnce("","abc");
return 0 ;
}
