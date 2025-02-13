#include<iostream>
using namespace std;

int main(){
    int n;
    int i=0;
    cin >> n;
    while(n>0){
        i++;
        n-=(i*(i+1))/2;
    }
    if(n<0)cout<<i-1;
    else cout<<i;
    return 0;
}