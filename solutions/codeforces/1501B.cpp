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
 int n ;
 cin>>n;
 int a[n+10] ;
 for(int i = 0 ; i <n ; i++)
   cin>>a[i];
 
 vector<int> v;
 int mx = 0;
 for(int i = n-1 ; i>= 0; i--){
   mx = max(a[i] , mx);
   if(mx){
     v.push_back(1);
     mx--;
   }
   else
   v.push_back(0);
 }
 
  for(int i = n-1 ; i>= 0; i--){
   cout<<v[i]<<" ";
 }
 
 
}
 
 
 
int main(){
	//ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll t ;
    cin >> t ;
    while(t--){
        solve();
        cout<<endl;
    }
 
 return 0;
}