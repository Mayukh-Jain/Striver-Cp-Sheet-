#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int  i = 0; i <n; i++)
    {
        string s,h;
        cin>>s>>h;
        map<char,int>letters;
        map<char,int>letterh;
        int count=0,a=0;
        bool flag=false;
        for (char c:s){
            letters[c]++;
        }
        for (int j=s.length()-1;j<h.length();j++){
            if (j==s.length()-1){
                for(int k=0;k<s.length();k++){
                    letterh[h[k]]++;
                    // cout<<h[k];
                }
            }
            else{
                
                letterh[h[j-s.length()]]--;
                letterh[h[j]]++;
                if (letterh[h[j-s.length()]]<1) letterh.erase(h[j-s.length()]);
            }
            if (letters==letterh){
                    flag=true;
                    break;
                }
            
            
    }
    if (flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    return 0;
}