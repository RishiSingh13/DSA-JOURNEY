#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
   int studentcount=1;
   int pagesum=0;
   for(int i=0;i<m;i++){
    if(pagesum+arr[i]<=mid)
    pagesum+=arr[i];
    else{
    studentcount++;
    if((studentcount>n)||(arr[i]>mid))
    return false;
    pagesum=arr[i];
    }
   }
   return true;
}
int main(){
int sum=0,ans=0;
int arr[]={10,20,30,40};
for(int i=0;i<4;i++){
sum+=arr[i];
}
int s=0,e=sum;
int mid=s+ (e-s)/2;
while(s<=e){
    if(ispossible(arr,2,4,mid)){
    e=mid-1;
    ans=mid;}
    else 
    s=mid+1;
    mid=s+(e-s)/2;
}
cout<<ans;
}