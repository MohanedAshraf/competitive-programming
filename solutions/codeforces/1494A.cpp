#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
#define MOD 1000000007
#define EPS 1e-9
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define endl '\n'
#define foreach(it,x) for(__typeof__((x).begin()) it = (x).begin(); it != (x).end(); ++it)
 
void solve(){
  string s;
  cin >> s;
  vector<int> d(3);
  bool f =1 ;
  int x = s[0] - 'A';
  int y = s.back() - 'A';
  if (x == y)
        f=0;
  d[x] = 1; d[y] = -1;
  if (count(s.begin(), s.end(), 'A' + x) == s.length() / 2)
    d[3 ^ x ^ y] = -1;
  else
    d[3 ^ x ^ y] = 1;
  int bal = 0;
  for (char c : s) {
    bal += d[c - 'A'];
    if (bal < 0) {f=0; break;}
  }

  if(f && !bal)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
 
}
 
 
 
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t ;
    cin >> t ;
    while(t--){
        solve();
    }
 
 return 0;
}