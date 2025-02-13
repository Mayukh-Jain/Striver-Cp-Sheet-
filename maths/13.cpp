#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no,m ;
        cin >> no >> m ;
        if(no>=3) cout<<m*2<<endl;
        else if(no==2) cout<<m<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}