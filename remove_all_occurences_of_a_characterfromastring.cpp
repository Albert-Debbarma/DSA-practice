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
string rem (string str, string ans , int i, char x){
    if(str[i] == '\0')
    return ans;
    if(str[i] == x){
        return rem(str,ans,i+1,x);
    }
    else{
        ans.push_back(str[i]);
        return rem(str,ans,i+1,x);
    }
}
string rem2(string str, char target){
if(str.length() == 0)
return " ";
if(str[0] == target ){
    return rem2(str.substr(1),target);
}
else{
    return str[0] + rem2(str.substr(1),target);
}
}
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
char x ='o';
string s ="cvolopop" ;
string res = rem2(s,x);
cout<<res;

    


return 0 ;
}
