#include<iostream>
using namespace std;
void revarr(int arr[],int size){
    for (int i=0;i<size/2;i++){
int temp=0;
temp=arr[i];
arr[i]=arr[size-1-i];
arr[size-1-i]=temp;
}

}
int main(){
    int size;
    cout<<"Enter number of element in array:";
    cin>>size;
    int array[size];
        for(int i=0;i<size;i++){
        cout<<"Entern the element "<<endl;
        cin>>array[i];

    }
    revarr(array,size);
    cout<<endl;
    for (int j=0;j<size;j++){
        cout<<array[j]<<" ";

    }
    return 0;
}