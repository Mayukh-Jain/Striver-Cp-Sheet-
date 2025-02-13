#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a, b,c;
        cin >> a;
        cout<<2<<endl;
        if(a==2) cout<<1<<" "<<2<<endl;
        else if(a==3)  {
            cout<<2<<" "<<3<<endl;
            cout<<1<<" "<<3<<endl;
        }
        else{
        for(int j=0;j<(a-1);j++){
            if(j==0){
                b=a;
                c=a;
                c-=2;
                
            }
            else if (j==1)
            {
                c++;
                b=c;
            }
            else if (j==2) {
                
                b-=2;
            }
            else{
                c--;
                b--;
            }
            cout<<c<<" "<<b<<endl;
            
        }
        }
    }
    
    return 0;
}