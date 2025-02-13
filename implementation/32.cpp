#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s,a;
    cin >> s;
    int cnt = 1;
    int check=0;
    int cnt2=0;
    sort(s.begin(),s.end());
    for (int i =1;i<s.length(); i++)
    {
        if (s[i] == s[i-1]){
            cnt++;
        }
        else{
            if(cnt%n!=0){
                check=1;
            }
            a[cnt2]=s[i-1];

            cout<<"a= "<<a;
            cnt2++;
            cnt = 1;
            
        }
    }
    if(check!=0 or s.length()%n!=0){
        cout << "-1" << endl;
    }

    else{
        for (int i = 0; i < n; i++)
        {   
            cout<<a;
        }
        
    }
    return 0;
}