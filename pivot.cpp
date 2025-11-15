#include<iostream>
using namespace std;
int main(){
int arr[]={9,10,23,45,90,7,8};
int s=0,e=6;
int mid=s+(e-s)/2;
while(s<e){
if(arr[mid]>=arr[0]){
    s=mid+1;
}
else{
    e=mid;
}
mid =(s+e)/2;
}
cout<<e;
}