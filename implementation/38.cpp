#include<iostream>
using namespace std;

int main(){
    int  n,aim;
    cin >> n >> aim;
    int count = 1;
    int arr[n-1];
    for (int i = 0; i <n-1;i++)
    {
        cin>>arr[i];
    }
    // int i=0;
    while(count<aim){
        count+=arr[count-1];
        // i+=arr[i];
    }
    if (count==aim) cout<<"YES";
    else cout<<"NO";    
    return 0;
}