#include<iostream>
using namespace std;

int main(){
    string ct,ch;
    string move="NO";
    cin>>ct;
    for(int i=0;i<5;i++){
        cin>>ch;
        if ((ch[1]==ct[1])or(ch[0]==ct[0])) {
            move="YES";
        }
    }
    cout<<move;

    return 0;
}