#include<iostream>
using namespace std;
int fabbi(int n){
if (n==0){
    return 0;
}
if(n==1||n==2){
    return 1;
}
return fabbi(n-1)+fabbi(n-2);
}
int main(){

    int num;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"fabbonacci of"<<num<<"is"<<fabbi(num);
    return 0;
}