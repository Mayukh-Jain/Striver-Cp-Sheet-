#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    int arr[n];int out[n];int result[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        out[i]=arr[i];
    }
    sort(arr, arr + n);
    if (arr[0]>d){
        cout << "0";
        return 0;
    }
    int count=0,c=0;
    for(int i = 0; i < n; i++){
        count+=arr[i];
        // cout<<1;
        if(count<=d){
            int a=find(out, out + n,arr[i])-out;
            result[c]=a;
            // cout<<arr[i];
            c++;
            out[a]=-1;
        }
        else break;
    }
    
    cout<<c<<endl;
    for (int i = 0; i < c; i++)
    {
        cout<<result[i]+1<<" ";
    }
    
    return 0;
}