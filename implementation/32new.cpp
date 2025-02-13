#include<iostream>
#include<map>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>dict;
    for (int i = 0 ;i<s.length();i++ ){
        dict[s[i]]++;
    }
    for (const auto & pair :dict){
        if (pair.second%n!=0){
            cout<<"-1";
            return 0;
        }
    }
    for (int i=0;i<n;i++){
        for (const auto & pair :dict){
            for (int j=0;j<pair.second/n;j++)
                cout<<pair.first;
        }
    }
    return 0;
}