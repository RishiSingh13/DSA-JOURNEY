#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int key){
    int start=0,end=n-1;
   int  mid= start + (end-start)/2;
   int ans;
   while(start<=end){
    if (arr[mid]==key){
      ans=mid;
      end=mid-1;
    }
    else if(arr[mid]>key){
     end=mid-1;   
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;
   }
   return ans;
}
int lastocc(int arr[],int n,int key){
    int start=0,end=n-1;
   int  mid= start + (end-start)/2;
   int ans;
   while(start<=end){
    if (arr[mid]==key){
      ans=mid;
      start=mid+1;
    }
    else if(arr[mid]>key){
     end=mid-1;   
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;
   }
   return ans;
}
int main(){
    int arr[]={2,3,4,5,5,5,5,6,7,8,5,5};
     cout<<firstocc(arr,12,5);
    cout<<lastocc(arr,12,5);
}