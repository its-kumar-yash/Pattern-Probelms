#include<bits/stdc++.h>
using namespace std;

/* 

    *
   **
  ***
 ****
*****

*/

int main(){
    int n;
    cin>>n;

    int sp = n-1;// Number  of spaces intialially
    int st = 1;// Number to stars intitially

    for(int i = 1; i<=n; i++){
        // cout<<sp<<" "<<st<<endl;
        for(int j = 1; j<= sp; j++){
            cout<<"\t";
        }
        for(int j = 1; j<= st; j++){
            cout<<"*\t";
        }
        cout<<endl;
        sp--;
        st++;
    }
    return 0;
}