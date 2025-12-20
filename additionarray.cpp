#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr1[]={1,3,5,7,9};
    int arr2[]={3,5,7};
    int sum=0,carry=0;
vector<int> v;
int i=4,j=2;
while(i>=0 && j>=0){
    int temp= arr1[i]+arr2[j]+carry;
    sum=temp%10;
    carry=temp/10;
    v.push_back(sum);
    i--;
    j--;
}
while(i>=0){
    int temp= arr1[i]+carry;
    sum=temp%10;
    carry=temp/10;
    v.push_back(sum);
    i--;
}
while(j>=0){
    int temp= arr2[j]+carry;
    sum=temp%10;
    carry=temp/10;
    v.push_back(sum);
    j--;
}
while(carry!=0)
v.push_back(carry);
 int s=0,e=v.size()-1;
 while(s<e){
    swap(v[s],v[e]);
    s++;
    e--;
 }

for(int i=0;i<v.size();i++){
   cout<<v[i]<<" "; 
}
}