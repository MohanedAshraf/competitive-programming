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
 
 int n , k  ;
 cin>>n>>k;
 string s;
 cin>>s;
 
 int  j = n-1 , i=0;
 for(; i<n/2 ; i++){
   if(s[i] != s[j])break;
   j--;
 }
 
 if(j<i ){
 if(k+1<= ((n+1)/2))
  cout<<"YES"<<endl;
 else
  cout<<"NO"<<endl;
 return ;
 }
 
 
 if(k <= (n - (abs(j-i)+1)) / 2 || k==0)
 cout<<"YES"<<endl;
 
 else
 cout<<"NO"<<endl;
 
 
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