#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    cin >> n;
    int maxm=1,count=1;
    cin>>a;
    for(int i = 1; i < n; i++){
        cin>>b;
        if (a<b) { 
            count++;
            }
        else{
            count=1;
        }
        if (count>maxm) maxm=count;
        a=b;
    }
    cout<<maxm;
    return 0;
}