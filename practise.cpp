#include<iostream>
using namespace std;
void common(int arr1[],int n1,int arr2[],int n2){
    int arr3[100];
     int count=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if (arr1[i]==arr2[j]){
            arr3[count]=arr1[i];
            arr2[j]=-1;
            count++;
            }
        }
    }
    for(int i=0;i<count;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,3,2,1,1,1,2,3,4,4,5,};
    int ARR[]={2,8,9,4,5};
    common(arr,14,ARR,5);
    
}