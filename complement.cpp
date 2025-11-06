#include<iostream>
using namespace std;
int main(){
int m=0,n, num,comp;
cout<<"Enter the number:"<<endl;
cin>>num;
n=num;
while(num!=0){
    m=(m<<1)|1;
    num=num>>1;

}
comp=(~n) & m;
cout<<comp;
return 0;
}