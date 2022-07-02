#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i = 0;i < (int)N;++i)
#define rep1(i,N) for(int i = 1;i < (int)N;++i)
#define repi(i,j,N) for(int j = i;j < (int)N;++j)
#define co(x) cout << x << endl
#define cosp(x) cout << x << " "
#define sort(A) sort(A.begin(),A.end())
#define reverse(A) reverse(A.begin(),A.end())
#define INF 1e18
using ll = long long;
using ull = unsigned long long;
int main(){
ll m,v = 0;
cin >> m;
if(m < 100) cout << 0;
else if(m <= 5000){
    if(m/100 < 10) cout << 0;
    v = m/100;
}
else if(m <= 30000) v = m/1000+50;
else if(m <= 70000) v = (m/1000-30)/5+80;
else v = 89;
co(v);
}