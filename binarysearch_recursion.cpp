

#include<iostream>
using namespace std;
int bs(int a[],int target,int start, int end){
   if(start > end ){
   return -1;
   }
   int mid = start + (end-start)/2;
  if(a[mid] == target)
  return mid;
  if(a[mid] > target) {
    return bs(a,target,start,mid-1);
  }
  else{
    return bs(a,target,mid+1,end);
  }
  


}
int main(){

int arr[] = {2,4,7,89,78,45,76};
int target = 89;
int size = sizeof(arr)/sizeof(arr[0]);
cout<<bs(arr,target,0,size-1)<<endl;
 return 0;

}
