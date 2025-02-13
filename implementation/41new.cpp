#include<iostream>
using namespace std;

int main(){
    int n,x,y;
    
    cin>>n>>x>>y;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for(int j=i-x;j<i;j++){
            if(j<0){
                break;
            }
            if(arr[j]<arr[i]){
                flag = false;
                break;
            }
        }
        for(int j=i+1;j<(y+i+1);j++){
            if(j>=n){
                break;
            }
            if (arr[j]<arr[i]) {
                flag=false;
                break;
            }
        
        }
        
        if (flag) {
            cout<<i+1;
            return 0;
        }
    }
    
    
    return 0;
}