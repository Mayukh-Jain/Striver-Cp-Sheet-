#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {   int count=0;
        int a,b,c;
        cin>>a>>b>>c;
        while(a<=c and b<=c){
        if (a<b){
                a+=b;
                count++;
                
            }    
        else{
                b+=a;
                count++;
               
            }
            }
        cout<<count<<endl;
        }

    return 0;
}