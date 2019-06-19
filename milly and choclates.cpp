#include <bits/stdc++.h>
#include <iomanip>
 
#define FAST std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define DECIMAL(n)  std::cout << std::fixed;std::cout << std::setprecision(n);
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define fi first 
#define se second
#define ALL(v) v.begin(), v.end()
#define SORT(v) sort(ALL(v))  
#define REVERSE(v) reverse(ALL(v))
#define endl "\n"
#define maxc(v) max_element(all(v))
#define minc(v) min_element(all(v))
#define GCD(m,n) __gcd(m,n)
#define debug cerr<<"bhau"<<endl
#define debugv(x) cerr<<x<<endl
#define inputarr(a,n) for(int i=0;i<n;++i) cin>>a[i]
#define printarr(a,n) for(int i=0;i<n;++i) cout<<a[i]<<" "
#define initarr(a,n,x) for (int i=0;i<n;++i) a[i]=x
 
#define ll long long
#define ld long double 
#define pii pair<int, int> 
#define pll pair<ll, ll>  
#define vi vector<int>  
#define vvi vector<vi > 
#define vii vector<pii >
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    cin>>a[i];
    
    ll sum=0;
    for(ll i=1;i<=n;i++)
    sum+=a[i];
    ll k=1;
    
    map<ll,ll> m;
    ll sum1=a[1];
    for(ll i=1;i<=sum;i++)
    {
        if(i>sum1)
        {k++;
            sum1+=a[k];
        }
        m[i]=k;
        
    }
    ll t;
    cin>>t;
    ll x;
    while(t--)
    {
        cin>>x;
        cout<<m[x]<<endl;
    }
    
}
