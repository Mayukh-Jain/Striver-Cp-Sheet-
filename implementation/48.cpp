#include<iostream>
#include<map>

using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    int ques[m][n];  
    int out[m][n]; 
    int cou=0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> ques[i][j];  
            out[i][j] = 0;
            // cout<<ques[i][j]<<out[i][j];
            if(ques[i][j]==out[i][j])cou++;
        }
    }
    // cout << cou << endl;
    if (cou==m*n){
        cout << "YES"<<endl;
        for(int i = 0; i < m; i++){
            
        for(int j = 0; j < n; j++){
            if (j==n-1){
                cout << out[i][j] << endl;
                continue;
            }
            cout << out[i][j]<<" ";  
            // out[i][j] = 0;
        }
        }
        return 0;
    }
    bool flag=false;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int x=0,y=0;
            for (int k=0;k<m;k++){
                if (ques[k][j]==0)continue;
                else x++;               
            }
            for (int k=0;k<n;k++){
                if (ques[i][k]==0)continue;
                else y++;               
            }
            // cout<<x<<y;
            if(x==m && y==n){
                flag=true;
                out[i][j]=1;
            }
            else if(ques[i][j]==1){
                if(x>0 && y>0 &&x<m&&y<n){
                cout<<"NO";
                return 0;
            }
            }
        }
    }
    if(flag){
        cout << "YES" << endl;
        for(int i = 0; i < m; i++){
            
        for(int j = 0; j < n; j++){
            if (j==n-1){
                cout << out[i][j] << endl;
                continue;
            }
            cout << out[i][j]<<" ";  
            // out[i][j] = 0;
        }
        // cout << endl;
    }
    }
    else cout<<"NO";
    return 0;
}