#include<iostream>
using namespace std;

int main(){
    int n;
    int a=0;
    cin>>n;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        if (x==1){
            a=1;
        }
       
    }
    if (a==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}