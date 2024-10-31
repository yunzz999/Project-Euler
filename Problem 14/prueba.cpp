#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v (1e6,0);


int collatz (ll n){
    if(n==1){
        return 1;
    }
    if(v[n-1]!=0){
        return v[n-1];
    }
    if(n%2!=0){
        return 1+collatz(3*n+1);
    }
    else if(n%2==0){
        return 1+collatz(n/2);
    }
}


int main(){
    v[0]=1;
    ll n,max_value=0,current,posicion;
    for(ll i=2;i<1e6;i++){
        current=collatz(i);
        v[i-1]=current;
        max_value=max(current,max_value);
        if(max_value==current){
            posicion=i;
        }
    }
    cout<<posicion<<": "<<max_value<<endl;
}

// No funciona...