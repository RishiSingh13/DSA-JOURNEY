#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int s=0 ;
    for(int i=0;i<n;i++){
        s=s^arr[i];
    }
    for (int i=0;i<n-1;i++){
        s=s^arr[i];
    }
    return s;}


int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,3};
cout<<duplicate(arr,13);
return 0;
}