#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m=0;
    int a=0;
    // while(m<n){
    //     m+=4;
    // }
    // if (m==n){
    //     for (int j=0;j<m;j++) cout << "4";
    //     return 0;
    // }
    // m=0;
    while(m<n){
        m+=7;
        a++;
    }
    if (m==n){
        for (int j=0;j<a;j++) cout << "7";
        return 0;
    }
    m=0;
    a=0;
    int i=1;

    while(m<n){
        m+=4*i;
        while(m<n){
            m+=7;
            a++;
        }
        if (m==n){
            for (int j=0;j<i;j++) cout << "4";
            for (int j=0;j<a;j++) cout << "7";
            return 0;
            }
            if (4*i>n) break;
        m=0;
        a=0;
        i++;
    }
    cout<<"-1";
    return 0;
}