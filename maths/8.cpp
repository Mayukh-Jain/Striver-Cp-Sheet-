#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        if((a+b+c+n)%3==0){
            if ((a+b+c+n)/3>=a && (a+b+c+n)/3>=b && (a+b+c+n)/3>=c){
                cout <<"YES"<< endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
    
    return 0;
}