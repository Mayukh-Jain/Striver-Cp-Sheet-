#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        int b=a.length();
        int c=a[0] -'0';
        int m=((c-1)*10)+b;
        while (b--){
            // b--;
            m+=b;
        }
        cout <<m<< endl;

    }
    return 0;
}   