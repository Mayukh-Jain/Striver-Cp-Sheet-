#include<iostream>
#include<set>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    set<char> a;
    for (char ch : s) {
        a.insert(ch);
    }
    if((a.size()%2)==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}