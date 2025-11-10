#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0){

            i++;
        }
        while(arr[j]==1){
            j--;   
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
void prnt(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={0,1,1,0,0,0,1,1,0};
    sort(arr,9);
    prnt(arr,9);
}