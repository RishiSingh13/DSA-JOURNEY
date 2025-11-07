#include<iostream>
using namespace std;
int count=0;
int setbit(int a,int b){
    while(a!=0){
        if ((a&1)==1){
            count+=1;}
            a=a>>1;
        
    }
     while(b!=0){
        if ((b&1)==1){
            count+=1;}
            b=b>>1;
        
    }
    return count;
}
int main(){
    int x,y;
    cout<<"Entern two numbers:";
    cin>>x>>y;
    cout<<setbit(x,y);
    return 0;
}