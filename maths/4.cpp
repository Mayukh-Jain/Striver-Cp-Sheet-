#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int a,countodd=0,counteven=0;
        cin>>a;
        for (int j = 0; j < a; j++)
        {
            int b;
            cin>>b;
            if(b%2!=0)countodd++;
            else counteven++;
        }
        if (countodd%2==0){
            if (counteven>0 && countodd>0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
        
    }
    

    return 0;
}