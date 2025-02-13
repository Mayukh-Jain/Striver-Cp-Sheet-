#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i =0;i<n;i++){
        int input;
        cin>>input;
        
        int numbers[4];
        int count=0;
        int m=1;

        while(input>0){
            int digit=input%10;
            if (digit !=0){
                numbers[count]=digit*m;
                count++;
            }
            input/=10;
            m*=10;
        }
        cout<<count<<endl;
        for (int j=0;j<count;j++){
            cout<<numbers[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}