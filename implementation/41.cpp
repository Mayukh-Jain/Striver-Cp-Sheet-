#include<iostream>
using namespace std;

int main(){
    long long n,x,y;
    cin>>n>>x>>y;
    long long arr[n+y+x];
    for (int i=0;i<x;i++){
        arr[0+i]=0;
    }
    for (int i=0;i<y;i++){
        arr[n+i]=0;
    }
    for(int i=x;i<n+x;i++){
        cin>>arr[i];
    }

    for(long long i=x;i<n+x;i++){
        int count=0;
        for(int j=i-x;j<i;j++){
            if (arr[j]>arr[i]) count++;
            else if (arr[j]==0) count++;
            // cout<<count<<".";
        }
        for(int j=i+1;j<(y+i+1);j++){
            if (arr[j]>arr[i]) count++;
            else if (arr[j]==0) count++;
            // cout<<j<<count<<";";
        }
        // cout<<count<<endl;
        if (count==x+y) {
            // if (n==1) cout<<i+1;
            cout<<i+1-x;
            return 0;
        }
        
    }
    return 0;
}