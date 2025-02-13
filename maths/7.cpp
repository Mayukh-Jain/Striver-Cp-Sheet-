#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int r,c;
        cin >> r >> c;
        if((r*c)%2!=0) cout<<(r*c)/2+1<<endl;
        else cout<<(r*c)/2<<endl;
    }
    
    return 0;
}