#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int> v={4,6,12,3,15};
    int k;
    cout<<"Enter the number of rotations :";
    cin>>k;
    vector<int> temp;
    for(int i=0;i<v.size();i++){
        temp.push_back(v[(i+k)%(v.size())]);
    }
    cout<<"Rotated array is :"<<endl;
    v=temp;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}