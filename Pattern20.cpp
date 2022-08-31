#include<bits/stdc++.h>
using namespace std;

/*


                                *
                        *       *       *
                *       *       *       *       *
        *       *       *       *       *       *       *


*/



int main(){
    int n;
    cin>>n;

    int st = 1, sp = n-1;

    for(int i = 1; i < n; i++){
        for(int j = 1; j<=sp; j++){
            cout<<"\t";
        }
        for(int j = 1; j<=st; j++){
            cout<<"*\t";
        }

        sp--;
        st+=2;
        cout<<endl;
    }
    
    return 0;
}