#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int j = 0; j<t; j++)
    {
        int n,ce=0,co=0,count=0;
        cin >> n;
        for (int i = 0; i <n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0){
                ce++;
                if (i%2==0) count++;
            }
            else {
                co++;
                if (i%2==1) count++;
            }
        }
        if(n%2==0){
            if (ce==co){
                cout<<(n-count)/2<<endl;
            }
            else cout<<"-1"<<endl;
            continue;
        }
        else {
            // cout<<ce<<co<<count;
            if ( ce==co+1 ){
                cout<<(n-count)/2<<endl;
            }
            else cout<<"-1"<<endl;
                
        }
    }
    
    return 0;
}