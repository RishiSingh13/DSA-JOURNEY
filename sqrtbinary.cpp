#include<iostream>
using namespace std;
int sqrt(int n){
    int s=0,e=n,ans;
    int mid=s+(e-s)/2;
    while(s<=e){
        if (mid*mid==n){
            return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            s=mid;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    cout<<sqrt(n);
}