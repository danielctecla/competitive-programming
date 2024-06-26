//https://codeforces.com/gym/105164/problem/C
#include <bits/stdc++.h>

#define endl '\n'
#define ll long long
#define lli long long int
#define ld long double
#define fore(i,a,b) for (int i = a; i < b; i++)
#define forr(i,a,b) for (int i = a; i > b; i--)
#define forn(i,n) for (int i = 0; i < n; i++)
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(), v.end()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef map<int, int> mii;

void solve(){
    int l_,w_,h_,l,w,h;
    cin>>l_>>w_>>h_>>l>>w>>h;
    int max_ = 0;
    max_ = max(int(l_/l) * int(w_/w) * int(h_/h) , max_);
    max_ = max(int(l_/l) * int(w_/h) * int(h_/w) , max_);
    max_ = max(int(l_/w) * int(w_/l) * int(h_/h) , max_);
    max_ = max(int(l_/w) * int(w_/h) * int(h_/l) , max_);
    max_ = max(int(l_/h) * int(w_/l) * int(h_/w) , max_);
    max_ = max(int(l_/h) * int(w_/w) * int(h_/l) , max_);
    cout<<max_;
}

int main() {
    fast_io
    solve();
}