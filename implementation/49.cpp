#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if (a%2==0){
            cout<<a/2<<endl;
            continue;
        }
        if (count==0){
            if(a>=0)cout<<(a+1)/2<<endl;
            else cout<<a/2<<endl;
            count=1;
        }
        else{
            if(a>=0)cout<<a/2<<endl;
            else cout<<(a-1)/2<<endl;
            count=0;
        }

    }
    return 0;
}