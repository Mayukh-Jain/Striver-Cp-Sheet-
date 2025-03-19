#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=0;j<t;j++){
        int a,b;
        cin >> a >> b;
        if (a>=b) {
            cout<<((a-b)%10 > 0 ? 1:0)+(a-b)/10<<endl;
        }
        if (a<b) {
            cout<<((b-a)%10 > 0 ? 1:0)+(b-a)/10<<endl;
        }
    }
    return 0;
}