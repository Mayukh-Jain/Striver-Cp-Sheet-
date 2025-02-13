#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int,int>dict;
    for (int i=1;i<n+1;i++){
        int a;
        cin>>a;
        dict[a]=i;
    }
    for(int i=1;i<n+1;i++){
        cout<<dict[i]<<" ";
    }
    return 0;
}