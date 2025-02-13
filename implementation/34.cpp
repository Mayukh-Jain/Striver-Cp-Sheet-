#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <2*n+1; i++)
    {
        for (int j=0;j<abs(n-i);j++){
           
            cout<<"  ";
        }
        for (int j=0;j<=n-abs(n-i);j++){
            if (j==0) cout<<""<<j;
            else cout<<" "<<j;
        }
        for (int j=n-abs(n-i);j>0;j--){
            cout<<" "<<j-1;
        }
        cout<<endl;
    }
    
    return 0;
}