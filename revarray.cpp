#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &arr,int i){
    int s=i+1,e=arr.size()-1;
   while (s<=e)
   {
    swap(arr[s++],arr[e--]);
   }

}
int main(){
    vector<int> v;
    cout<<"enter the number of elements in array:";
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
     cout<<"enter the element :"<<endl;
     cin>>element;
     v.push_back(element);
    }
cout<<"Enter the index after which reverse:";
int index;
cin>>index;
reverse(v,index);
cout<<"reversed array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
}
}