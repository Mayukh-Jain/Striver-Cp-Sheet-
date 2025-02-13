#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    string start,end;
    cin>>start>>end;
    int h1,h2,m1,m2;
    h1=((start[0]-'0')*10)+(start[1]-'0');
    h2=((end[0]-'0')*10)+(end[1]-'0');
    m1=((start[3]-'0')*10)+(start[4]-'0');
    m2=((end[3]-'0')*10)+(end[4]-'0');
    // cout<<m2<<m1;
    int m=((h2-h1)*60+(m2-m1))/2;
    // cout<<m<<endl;
    m+=m1;
    // cout<<m<<endl;
    int h=0;
    while(m>=60){
        m-=60;
        h++;
    }
    h+=h1;
    cout<< setfill('0') << setw(2)<<h<<":"<<setfill('0') << setw(2) <<m<<endl;
    return 0;
}