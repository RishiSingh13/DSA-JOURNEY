#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,0,9,0,0,6,0,3};
int i=0;
for(int j=0;j<8;j++){
    if(arr[j]!=0){
        swap(arr[i++],arr[j]);
    }
}
for(int j=0;j<8;j++){
    cout<<arr[j]<<" ";
}
}