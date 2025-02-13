#include<iostream>
#include<numeric>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        long long a, b;
        cin >> a >> b;
         if (a * 2 <= b) {
            cout << a << " " << a * 2 << endl;
        } else {
            cout << -1 << " " << -1 << endl;
        }
    }
    
    return 0;
}