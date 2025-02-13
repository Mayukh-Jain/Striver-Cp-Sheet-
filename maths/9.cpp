#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j=0;j<t;j++){
        long long x,y,n;
        cin>>x>>y>>n;
        long long m = (n - y) / x;
        long long k = m * x + y;
        
        cout << k << endl;
    }
    return 0;
}