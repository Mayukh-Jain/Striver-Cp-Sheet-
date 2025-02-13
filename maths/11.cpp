#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        int l,b;
        cin >> l >> b;
        if  (2*min(l,b)<max(l,b)) cout<<max(l,b)*max(l,b)<<endl;
        else cout<<min(l,b)*min(l,b)*4<<endl;
    }
    
    return 0;
}