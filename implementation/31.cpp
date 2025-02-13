#include<iostream>
using namespace std;

int main(){
    int pages;
    cin>>pages;
    int week[7];
    for(int i=0;i<7;i++){
        cin>>week[i];
    }
    int count=0;
    while(pages>0){
        if(count==7){
            count=0;
        }
        pages-=week[count];
        // cout<<week[count]<<endl<<pages<<endl<<count<<endl;
        count++;
        
        
    }
    cout<<count;
    return 0;
}