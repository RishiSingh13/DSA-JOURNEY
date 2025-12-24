#include <iostream>
using namespace std;
char maxchar(string &s){
    int arr[26]={0};
    int num,maxi=0,ans=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            num=c-'a';
            arr[num]++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]>maxi){
            maxi=arr[i];
            ans=i;
        }
    }
    char r='a'+ ans;
    return (r);
}
int main() {
    string str;
    cin>>str;
    cout<<maxchar(str);
    return 0;
}
