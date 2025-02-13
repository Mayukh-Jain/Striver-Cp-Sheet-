#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s,a;
    cin >> s;
    int count=0;
    for (int i=0;i<n;i=(count*(count+1))/2){
        cout<<s[i];
        count++;

    }
    return 0;
}