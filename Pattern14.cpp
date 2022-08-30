#include<bits/stdc++.h>
using namespace std;


/*

1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

Concept of nCr  

*/

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}


int main(){
    
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}