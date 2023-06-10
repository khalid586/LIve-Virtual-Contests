#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;


#define ll              long long 
#define khalid          std::ios::sync_with_stdio(false);cin.tie(NULL);
#define asc_sort(v)     sort(v.begin(), v.end())
#define dsc_sort(v)     sort(v.rbegin(), v.rend())
#define sum(v)          accumulate(v.begin(),v.end(),0ll)
#define lld             long double
#define ull             unsigned long long
#define all(s)          s.begin(),s.end()
#define endl            '\n'
#define lcm(a,b)        (a*b)/(__gcd(a,b))
#define lcm3(a,b,c)     (lcm(a,b)*c)/(__gcd(c,lcm(a,b)))

//Starting in the name of Allah(THE ALMIGHTY)

#define rep(i,a,b)      for(ll i = a; i <  b;++i)
#define rev(i,a,b)      for(ll j = a; j >= b;--j)


//Starting in the name of Allah(THE ALMIGHTY)
void FastIO()
{
     khalid
    #ifndef ONLINE_JUDGE
     freopen("in.txt","r", stdin);
     //freopen("out.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);

    #endif // ONLINE_JUDGE      
}

// #define int long long int
void solve(int t){
     int n , k; 
     cin >> n >> k;

     int a[n];
     vector<int> sortedA(n),b(n);

     rep(i,0,n){
          cin >> a[i];
          sortedA[i] = a[i];
     }

     rep(i,0,n){
          cin >> b[i];
     }

     sort(all(b));

     sort(all(sortedA));
     map<int,vector<int>> m;

     rep(i,0,n) m[sortedA[i]].push_back(b[i]);

     rep(i,0,n){
          cout << m[a[i]][0] << ' ';
          m[a[i]].erase(m[a[i]].begin());
     }
     cout << '\n';

}


int32_t main()
{
     FastIO() ;
     ll test_case=1;
     cin >> test_case;

     rep(i,1,test_case + 1){
          solve(i);
     }
     return 0;
}

