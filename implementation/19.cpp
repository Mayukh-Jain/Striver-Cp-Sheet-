#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s,out;
    cin>>s;
    
    for (char ch : s) {
        if (ch != '+') {
            out += ch;
        }
    }
    sort(out.begin(),out.end());
    for (int i=0;i<out.length();i++){
        if (i > 0) cout << "+";
        cout << out[i];
    }
    return 0;
}