#include <iostream>
using namespace std;

int main() {
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int target=7;
    int s=0,e=3*4-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid/4][mid%4]==target){
            cout<<"Element found" <<endl;
            break;
        }
        else if(arr[mid/4][mid%4]<target){
s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        }

    }

  
