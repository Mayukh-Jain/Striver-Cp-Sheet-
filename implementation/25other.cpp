#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        string s;
        cin >> s;
        int count = 0;
        int zeroes=0;
        int switcher=0;
        for (int j=0;j<s.length();j++){
            if (s[j]=='1'){
                switcher=1;
            }
            if (switcher==1){
                if (s[j]=='0'){
                    count++;
                }
                else{
                    zeroes =count;
                    
                }
            }
        }
        cout<<zeroes<<endl;

    }
    return 0;
}