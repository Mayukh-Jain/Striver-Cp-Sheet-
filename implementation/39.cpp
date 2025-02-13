#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s[1]>='a') {
        cout<<s;
        return 0;
    }
    string a=s;
    if (a[0]>='a')a[0]-=32;
    else a[0]+=32;
    for (int i = 1; i <s.length(); i++)
    {
        
        if (a[i]>='a'){
            cout<<s;
            return 0;
        }
        else a[i]=a[i]+32;
    }
    cout<<a;
    return 0;
}

