#include<iostream>
using namespace std;
int peak(int arr[],int n){
int s=0,e=n-1;
 int mid=s+(e-s)/2;
 while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=(s+e)/2;
 }
 return s;
}
int main(){
    int arr[]={1,3,4,5,7,6,4,2};
    cout <<peak(arr,8);
}