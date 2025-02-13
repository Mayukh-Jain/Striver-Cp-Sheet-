#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int a,b,f=1;
        cin>>a>>b;
        a-=2;
        while(a>0){
            a-=b;
            f++;
        }
        cout<<f<<endl;
    }
    
    return 0;
}