#include<iostream>
using namespace std;
int main(){
    int arr[]={2,12,5,6,8,9,1,20};
    for(int i=1;i<8;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}