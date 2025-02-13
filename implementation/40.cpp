#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long count = arr[n-1];
    for(int i = n-2; i >=0; i--){
        if (arr[i+1]>arr[i]) {
            count+=arr[i];
        }
        else {
            if ((arr[i+1]-1)>=0) {
                arr[i] = arr[i+1]-1;
                count+=arr[i];
            }
            else {
                arr[i]=0;
                count+=0;
            }
        }
    }
    cout << count << endl;
    return 0;
}