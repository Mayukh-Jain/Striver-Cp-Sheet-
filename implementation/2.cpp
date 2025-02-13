#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int r=0;
    int c=0;
    int moves=0;
    string a;
    for (int i=1;i<6;i++){
        cin>>a;
        for (int j=0; j<9;j++){
            if (a[j]=='1'){
                r=i;
                c=(j/2)+1;
            }
        }
        
    }
    moves=abs(r-3)+abs(c-3);
    cout << moves << endl;
    return 0;
}