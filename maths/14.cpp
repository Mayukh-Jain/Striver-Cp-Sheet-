#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a%4 == 0){
            cout<<"YES"<<endl;
            for(int j=2;j<=a;j+=2){
                cout<<j<<" ";
            }
            int count=0;
            for(int j=2;j<=a/2;j+=2) cout<<j-1<<" ";            
            for(int j=a/2+2;j<=a;j+=2) cout<<j+1<<" ";            
            cout<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    
    return 0;
}