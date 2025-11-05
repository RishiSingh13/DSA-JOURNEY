#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,i=0;
double b=0;
    cin>>a;
while(a!=0){
int bit=a&1;
b=(bit*pow(10,i)) +  b;
i++;
a=a>>1;
}
cout<<b;
return 0;
}