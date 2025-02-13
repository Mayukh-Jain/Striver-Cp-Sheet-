#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        int count = 0;
        int arr[s.length()];
        for(int j=0;j<s.length();j++){
            if(s[j] == '1'){
                arr[count]=j;
                count++;
            }
        }
        if(count!=0){
            int min=arr[0];
            int ma=arr[count-1];
            // cout<<count<<min<<ma<<endl;
            int counter=0;
            for(int j=min;j<(ma+1);j++){
                if (s[j]=='0'){
                    counter++;
                }
            }
            cout << counter << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}