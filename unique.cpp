#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
int arr[]={1,1,2,2,3,3,4,5,5,6,7,6,7};
cout<<unique(arr,13);
return 0;
}