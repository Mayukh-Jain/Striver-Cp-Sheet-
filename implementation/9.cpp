#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    if (minIndex<maxIndex){
        cout<<maxIndex+(n-minIndex-2);
    }
    else{
        cout<<maxIndex+(n-minIndex-1);
    }
    return 0;
}