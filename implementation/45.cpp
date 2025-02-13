#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for (int i = 0; i <t; i++)
    {
        bool flag=true;
        int n;
        string s;
        cin>>n>>s;
        for (int j=0;j<n/2;j++){
            if (s[j]+1==s[n-j-1]+1 or s[j]+1==s[n-j-1]-1 or s[j]-1==s[n-1-j]+1 or s[j]-1==s[n-j-1]-1) continue;
            else {
                flag =false;
                break;
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}