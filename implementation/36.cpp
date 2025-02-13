#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a=n-2;
    int count=n+1;
    if (n==1 or n==0) {
        cout<<n;
        return 0;
    }
    for(int i=2;i<n;i++){
        count+=a*i;
        count++;
        a--;
    }

    cout << count << endl;
    return 0;
}