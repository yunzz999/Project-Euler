#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep_(i, k, n) for (int i = k; i < n; ++i)
typedef long long ll;

bool isPrime(ll n){
    ll raiz = sqrt(n)+1;
    if(n%2==0 and n!=2){
        return false;
    }
    for(int i=3;i<raiz;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.setf(ios::fixed);
  cout.precision(10);
  
  ll N , P,C=0,i =2;
  cin>>N;

  while(C<N){
    if(isPrime(i)){
        P=i;
        C++;
    }
    i++;
  }

  cout<<P;

  return 0;
}


//SOLVED