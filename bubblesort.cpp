#include<iostream>
using namespace std;
int main(){
    bool change=true;
    int arr[]={2,5,7,3,1,0,16,5};
    for(int i=1;i<8;i++){
        for(int j=0;j<8-i;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            change=false;
          }
        }
        if(change==true)
        break;
    }
    for(int i=0;i<8;i++)
    cout<<arr[i]<<" ";
}