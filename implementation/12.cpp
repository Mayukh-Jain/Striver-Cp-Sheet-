#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    cin >> n;
    int count=0;
    for(int i=0;i<n.length();i++){
        if((n[i]=='4')or(n[i]=='7')){
            count++;
            }
    }
    if ((count==4)or(count==7)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}