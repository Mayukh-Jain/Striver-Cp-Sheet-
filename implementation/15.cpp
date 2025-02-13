#include<iostream>
using namespace std;

int main(){
    int b,d,n;
    cin>>b>>d>>n;
    for (int i=1;i<n+1;i++){
        d=d-(b*i);
    }
    if (d<0){
        cout<<abs(d);
    }    
    else{
        cout<<0;
    }
    return 0;
}