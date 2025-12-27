#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    int rowstart=0,columnstart=0,rowend=v.size(),columnend=v[0].size();
    int count=0,telement=rowend*columnend;
    while(count<telement){
        for(int i=0;i<columnend;i++){
            cout<<v[rowstart][i];
        count++;
        }
        rowstart++;
        for(int i=0;i<rowend;i++){
            cout<<v[i][columnend-1];
            count++;
        }
        columnend--;
        for(int i=columnend;i>=0;i--){
            cout<<v[rowend-1][i];
            count++;
        }
        rowend--;
     for(int i=rowend;i>=0;i--){
        cout<<v[i][columnstart];
        count++;
     }
     columnstart++;
    }

    return 0;
}