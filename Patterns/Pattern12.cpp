#include <bits/stdc++.h>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10


*/

int main(){
    int n, cnt = 1;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for(int j = 1; j<= i; j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
    return 0;
}