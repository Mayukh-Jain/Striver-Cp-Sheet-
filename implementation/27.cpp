#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int m = 0; m <n; m++)
    {
        int i,j;
        cin >> i >> j;
        int count =0;
        for (int k = 0; k < i; k++){
            string s;
            cin >> s;
            if (s[j-1]=='R') count++;
            if (k==i-1){
                for (int a=0;a<j;a++){
                    if (s[a]=='D') count++;
                }
            }
        }        
        cout<<count<<endl;
    }
    
    return 0;
}