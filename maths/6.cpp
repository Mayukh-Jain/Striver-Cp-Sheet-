#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int x,y,z;
        cin >> x >> y >> z;
        int maxv=max(x,max(y,z));
        int count=0,b;
        if (x== maxv) count++;
        else b=x;
        if (y== maxv) count++;
        else b=y;
        if (z == maxv) count++;
        else b=z;
        if (count==1 ){
            cout<<"NO"<<endl;
            continue;
        }
        if(count==3) b=maxv;
        cout<<"YES"<<endl;
        int c;
        cout<<maxv<<" "<<b<<" "<<b<<endl;
    }
    return 0;
}