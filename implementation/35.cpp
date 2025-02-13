#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        long long a, b,c;
        cin >> a >> b >> c;
        if (c<=a){
            cout<<"-1 ";            
        }
        else{
            cout<<1<<" ";
        }
        if(c<a*b) cout<<b;
        else cout<<"-1";
        cout<<endl;
    }
    
    return 0;
}