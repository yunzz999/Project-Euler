#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v (1e8,0);
vector<pair<int,int>> u;

void memoized (int n,vector <pair<int,int>> u,vector<int> v){
    for(int i=0;i<u.size();i++){
        v[u[i].first]=n-u[i].second+1;
    }
}


int collatz (ll n,int count){
    if(v[n-1]!=0){
        int result = v[n-1]+count;
        memoized(result,u,v);
        u.clear();
        return result;
    }
    if(n%2!=0){
        count++;
        if(n<1e8){
            u.push_back(make_pair(n-1,count));
        }
        collatz(3*n+1,count);
    }
    else if(n%2==0){
        count++;
        if(n<1e8){
            u.push_back(make_pair(n-1,count));
        }
        collatz(n/2,count);
    }
}


int main(){
    v[0]=1;
    ll n;
    int max_value=0,current,posicion;
    cin>> n;
    for(int i=2;i<n;i++){
        current=collatz(i,0);
        max_value=max(current,max_value);
        if(max_value==current){
            posicion=i;
        }
    }
    cout<<posicion<<": "<<max_value<<endl;
}

