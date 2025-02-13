#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int t1 = 0; t1<t; t1++)
    {
        int n;
        string s;
        cin>>n; 
        cin>>s;
        int front=-1;
        int back=-1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (front == -1) {
                    front = i;  
                }
                back = i+1;           
            }
        }
        if (front==-1){
            cout<<n<<endl;
            continue;
        }        
        if (n-front>=back) {
            cout<<(n-front)*2<<endl;
        }
        else cout<<(back)*2<<endl;        
    }

    return 0;
}