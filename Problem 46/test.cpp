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

    int x;
    cin>>x;

    int n=1;
    bool c=false;
    while(2*n*n<= 2+x){
        if(isPrime(x-(2*n*n))){
            c=true;
            break;
        }
        n++;
    }

    if(c==false){
        cout<<x<<" "<<n<<endl;
        return 0;
    }


}