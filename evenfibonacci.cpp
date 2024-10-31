#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> fibonacii={1,2};
    long long suma=0;
    for(int i = 2;i<=4000000;i++){
        fibonacii.push_back(fibonacii[i-1]+fibonacii[i-2]);
        if(fibonacii[i]%2==0){
            suma+=fibonacii[i];
        }
    }
    cout<<suma+2;
}