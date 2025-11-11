#include <iostream>
using namespace std;
int liner(int arr[], int n, int k)
{
int start=0,end=n-1;
    int mid = (n - 1) / 2;
    while(start<=end){
    if (arr[mid] == k)
    {
        return mid;
    }
    if (arr[mid] > k)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    mid=(start+end)/2;
}
}
int main()
{
    int arr[]={1,3,4,12,34,56,78,90};
   cout<< liner(arr,18,56);
}