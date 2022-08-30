#include<bits/stdc++.h>
using namespace std;


/*

* * * * * 
* * * *
* * *
* *
*

*/

int main(){
    int n;
    cin>>n;
    int sp = 0, st = n;
    for(int i = 1; i<= n; i++){
        // cout<<sp<<" "<<st<<endl;
        for(int j = 1; j<=st; j++){
            cout<<"* ";
        }
        for(int j =1; j<=sp;j++){
            cout<<" ";
        }
        cout<<endl;
        sp++;
        st--;
    }
    return 0;
}