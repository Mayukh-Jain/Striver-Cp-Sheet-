#include<iostream>
using namespace std;

int main(){
    string s;
    int n;
    cin >>n>> s;
    for (int i = 0; i <n; i++)
    {
        if (s[i]!=s[i+1]){
        if (i+1<=n-1){
                cout<<"YES"<<endl;
                cout<<s[i]<<s[i+1];
                return 0;
        }
        }
    }
    cout<<"NO";
    return 0;
}