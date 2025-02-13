#include<iostream>
using namespace std;

int main(){
    int r,c;
    int count=0;
    cin>>r>>c;
    for (int i=0; i<r;i++){
        for (int j=0; j<c;j++){
            
            int a=i%2;
            if (a==0){
                cout<<"#";
            }
            else{
                if (count%2==0){
                    if (j==(c-1)){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                else{
                    if (j==0){
                        cout<<"#";
                    }
                    else{
                        cout<<".";
                    }
                }
                
            }
            
        }
        if (i%2 !=0){
                count++;
            }
        cout<<endl;
    }
    return 0;
}