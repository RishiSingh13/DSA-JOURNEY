#include <iostream>
#include<string>
using namespace std;
int main() {
    string s="the thing is this delete all the the here ";
    string part="the";
    size_t p;
    while((p=s.find(part))!=string::npos){
        s.erase(p,part.length());
    }
    cout<<s;
}