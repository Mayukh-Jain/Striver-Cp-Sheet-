#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a,b,count=0;
        cin >> a >> b;
        while(a>b){
            if (a - b>=10){
                a-=10;
                count++;
            }
            else{
                a=b;
                count++;
            }
        }
        while(a<b){
            if (b - a>=10){
                a+=10;
                count++;
            }
            else{
                a=b;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}