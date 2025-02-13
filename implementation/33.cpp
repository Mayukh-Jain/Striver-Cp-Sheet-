#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if (m%n!=0){
        cout << "-1" << endl;
        return 0;   
    }
    int count=0;
    int a=m/n;
    while(a>1){
        if (a%2==0){
            a=a/2;
            count++;
            }
        else if (a%3==0){
            a/=3;
            count++;
        }else{
            cout << "-1" << endl;
            return 0;  
        }
    }
    cout << count << endl;
    return 0;
}