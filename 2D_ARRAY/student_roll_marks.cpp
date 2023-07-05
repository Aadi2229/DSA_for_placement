#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)

int32_t main()
{
    fastio;
    int n=2;
    int array[2][5];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin>>array[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
