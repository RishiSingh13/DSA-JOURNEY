#include<iostream>
using namespace std;
bool ispossible(int arr[],int m,int n,int mid){
int paintercount=1,boardsum=0;
for (int i=0;i<m;i++){
    if((boardsum+arr[i])<=mid){
        boardsum+=arr[i];}
        else{
        paintercount++;
        if(paintercount>n||arr[i]>mid)
        return false;
        boardsum=arr[i];
        }
    }
    return true;
}
int main(){
    int arr[]={5,5,5,5};
    int s=0,e=20,ans;
    int mid=s+(e-s)/2;
    while(s<=e){
        if (ispossible(arr,4,2,mid))
        {e=mid-1;
        ans=mid;}
        else
        s=mid+1;
        mid=s+(e-s)/2;
    }
    cout<<ans;
}