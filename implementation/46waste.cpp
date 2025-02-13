#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        string s,h;
        cin>>s>>h;
        if (s.length()>h.length()){
            cout<<"NO"<<endl;
            continue;
        }
        map<char, int> letterCount;
        int count=0 ;
        for (char c : s) {
        letterCount[c]++;
        }
        int arr[s.length()];
        int m=0;
        for (int j=0;j<h.length();j++){
            if (letterCount.find(h[j]) != letterCount.end()) {
                count++;
                if (letterCount[h[j]]>0){
                    letterCount[h[j]]--;
                    arr[m]=j;
                    m++;
                }
                else letterCount.erase(h[j]);
            } else {
                count=0;
            }
            
        }
            bool allZero = true;
            for (const auto& pair : letterCount) {
                if (pair.second != 0) {
                    cout<<pair.second; 
                    allZero = false;    
                    
                }
            }
            bool aa=true;
            for (int i = 1; i < n; i++) {
                if (arr[i] != arr[i - 1] + 1) {
                    aa = false;
                    break;
                }
            }
            if(allZero && aa) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        
    }
    
    return 0;
}