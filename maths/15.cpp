#include<iostream>
using namespace std;

int main(){
    int cost,coin;
    cin>>cost>>coin;
    int count=1,intcost=cost;
    while(cost%10!=0 && cost%10!=coin ){
        cost+=intcost;
        count++;
        // cout<<cost;
    }
    cout<<count<<endl;
    return 0;
}