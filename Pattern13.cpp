#include<bits/stdc++.h>
using namespace std;

/*

0
1 1
2 3 5
8 13 21 24

Fibonacci Series + Triangle concept

*/


int main(){
    
    int n;
    cin>>n;

    int a = 0;
    int b = 1;
    int c;
    for(int i = 1; i<=n; i++){
        for(int j =1 ; j<= i; j++){
            cout<<a<<" ";
            c = a+b;
            a = b;
            b = c;
        }
        cout<<endl;
    }
    return 0;
}