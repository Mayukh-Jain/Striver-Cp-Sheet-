// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     int n;
//     int x=0;
//     cin >> n;
//     for (int i=0;i<n;i++){
//         string s;
//         cin>>s;
//         if (s[1]=='+'){
//             x++;
//         }
//         else if (s[1]=='-'){
//             x--;
//             }

//     }
//     cout<<x;
//     return 0;
// }





// 2
#include<iostream>
using namespace std;

int main(){
    string n;
    cin>>n;
    
    for (int i=0;i<n.length();i++){
        int a=n[i]-'0';
        if (i == 0 && a == 9) {
            continue;
        }
        else if(a>9-a){
            n[i]=(9-a)+'0';
        }
    }
    cout<<n;
    return 0;
}