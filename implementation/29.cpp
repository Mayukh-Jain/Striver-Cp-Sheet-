#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int g;
    cin >> g;
    for(int i=0;i<g;i++){
        int n;
        cin >> n;
        int a[2*n];
        for(int j=0;j<2*n;j++){
            cin >> a[j];
        }
        sort(a,a+2*n);
        cout<<a[n]-a[n-1]<<endl;
    }
    return 0;
}